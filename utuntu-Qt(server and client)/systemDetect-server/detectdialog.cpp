#include "detectdialog.h"
#include "ui_detectdialog.h"
#include "QTextTable"
#include "qscrollbar.h"
#include "qlistwidget.h"
#include "qmessagebox.h"
#include "qtimer.h"
#include "qdebug.h"
#include "qstringlist.h"
#include "QListWidgetItem"
#include "qhostaddress.h"
#include "qtcpsocket.h"
#include "qhostaddress.h"
#include "QHostInfo"
#include "QNetworkAddressEntry"
#include "connection.h"

detectDialog::detectDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::detectDialog)
{
    ui->setupUi(this);

//    this->setMaximumSize(this->size());
//    this->setMinimumSize(this->size());

    ui->lineEdit->setFocusPolicy(Qt::StrongFocus);
    ui->textEdit->setFocusPolicy(Qt::NoFocus);
    ui->textEdit->setReadOnly(true);
    ui->listWidget->setFocusPolicy(Qt::NoFocus);
    ui->ipaddressLabel->setText("asdfasdf");

    connect(&client, SIGNAL(newMessage(QString,QString)),
            this, SLOT(appendMessage(QString,QString)));
    connect(&client, SIGNAL(newParticipant(QString)),
            this, SLOT(newParticipant(QString)));
    connect(&client, SIGNAL(participantLeft(QString)),
            this, SLOT(participantLeft(QString)));

    myNickName = client.nickName();
    newParticipant(myNickName);
    tableFormat.setBorder(0);
    QTimer::singleShot(10 * 1000, this, SLOT(showInformation()));
    ui->tableWidget->setColumnWidth(0,230);
    ui->ipaddressLabel->setText((ipaddress())+":"+QString::number(server.serverPort()));
}
QString detectDialog::ipaddress()
{
    broadcastAddresses.clear();
    ipAddresses.clear();
    foreach (QNetworkInterface interface, QNetworkInterface::allInterfaces()) {
        foreach (QNetworkAddressEntry entry, interface.addressEntries()) {
            QHostAddress broadcastAddress = entry.broadcast();
            if (broadcastAddress != QHostAddress::Null && entry.ip() != QHostAddress::LocalHost) {
                broadcastAddresses << broadcastAddress;
                ipAddresses << entry.ip();
            }
        }
    }
    return ipAddresses.at(0).toString();
}

void detectDialog::resizeEvent(QResizeEvent *event)
{
    int col = this->width();
    int row = this->height();
    for(int i = 1;i<5;i++)
    ui->tableWidget->setColumnWidth(i,col/5);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

void detectDialog::appendMessage(const QString &from, const QString &message)
{
    qDebug()<<"message="<<message;
    if (from.isEmpty() || message.isEmpty())
        return;
    if(!messageCheck(message)) return;
    QStringList list1,list2;
    list1 = message.split(",");

    int row = 0,col = 0;
    for(int i = 0;i<list1.length();i++)
    {
        list2 = list1.at(i).split(":");
        if(list2.length()<3) return;

        if(list2.at(1)=="node1")
            col = 1;
        else if(list2.at(1)=="node2")
            col = 2;
        else if(list2.at(1)=="node3")
            col = 3;
        else if(list2.at(1)=="node4")
            col = 4;

        if(list2.at(0).toLower().contains("human",Qt::CaseInsensitive))
        {

                row = 1;

        }

        if(list2.at(0).toLower().contains("locomotion",Qt::CaseInsensitive))
        {

                row = 2;

        }

        if(list2.at(0).toLower().contains("movement",Qt::CaseInsensitive))
        {

                row = 3;

        }

        if(list2.at(0).toLower().contains("stationary",Qt::CaseInsensitive))
        {

                row = 4;

        }
//        for(int i = 0;i<ui->tableWidget->columnCount();i++)
//        {
//            if(isNumber(ui->tableWidget->item(row,i)->text()))
//            ui->tableWidget->setItem(row,i,new QTableWidgetItem(""));
//        }
        //ui->tableWidget->setItem(row,0,new QTableWidgetItem(list2.at(0)));
        ui->tableWidget->setItem(row,col,new QTableWidgetItem(list2.at(2).toLower()));
    }

    int rrow = 0;
    rrow = ui->tableWidget->rowCount() - 3;

    for(int j =1;j<ui->tableWidget->columnCount();j++)
    {
        int detectCount = 0;
        for(int i = 1;i<=4;i++)
        {
            if(ui->tableWidget->item(i,j)->text() == "detected")
            {
                ui->tableWidget->item(i,j)->setTextColor(Qt::green);
                detectCount++;
            }
            if(ui->tableWidget->item(i,j)->text() == "notdetected")
            {
                ui->tableWidget->item(i,j)->setTextColor(Qt::red);
            }
            if(isNumber(ui->tableWidget->item(i,j)->text()))
            {
                ui->tableWidget->item(i,j)->setTextColor(Qt::blue);
            }
            if((ui->tableWidget->item(i,j)->text().isEmpty()) && i==row)
            {
                ui->tableWidget->setItem(i,j,new QTableWidgetItem("n/a"));
                ui->tableWidget->item(i,j)->setTextColor(Qt::black);
            }
        }
    ui->tableWidget->setItem(5,j,new QTableWidgetItem(QString::number(detectCount)));
    if(detectCount!=0)
        ui->tableWidget->item(5,j)->setTextColor(Qt::green);
    else ui->tableWidget->item(5,j)->setTextColor(Qt::red);
    }
    //ui->tableWidget->setItem(rrow+1,0,new QTableWidgetItem("Number of Human Presence"));
    //ui->tableWidget->setItem(rrow+2,0,new QTableWidgetItem(" - "));

    QTextCursor cursor(ui->textEdit->textCursor());
    cursor.movePosition(QTextCursor::End);
    QTextTable *table = cursor.insertTable(1, 2, tableFormat);
    table->cellAt(0, 0).firstCursorPosition().insertText('<' + from + "> ");
    table->cellAt(0, 1).firstCursorPosition().insertText(message);
    QScrollBar *bar = ui->textEdit->verticalScrollBar();
    bar->setValue(bar->maximum());
}

bool detectDialog::messageCheck(QString str)
{
    QStringList list1 = str.split(",");

    for(int i = 0;i<list1.length();i++)
    {
        QStringList list2 = list1.at(i).split(":");
        if(list2.length()<3) return false;
        QString firstStr  = list1.at(0).split(":").at(0);
        QString secondStr  = list1.at(0).split(":").at(1);
        if(firstStr!=list2.at(0)) return false;
        if((secondStr==list2.at(1)) && (i!=0)) return false;
        if((!list2.at(0).contains("human")) && (!list2.at(0).contains("locomotion")) && (!list2.at(0).contains("movement")) && (!list2.at(0).contains("stationary"))) return false;
        if((!list2.at(1).contains("node1")) && (!list2.at(1).contains("node2")) && (!list2.at(1).contains("node3")) && (!list2.at(1).contains("node4"))) return false;
        if((!list2.at(2).contains("detected")) && (!list2.at(2).contains("notdetected"))) return false;
    }
    return true;
}

bool detectDialog::isNumber(QString str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str.mid(i)!="0"&&str.mid(i)!="1"&&str.mid(i)!="2"&&str.mid(i)!="3"&&str.mid(i)!="4"&&str.mid(i)!="5"&&str.mid(i)!="6"&&str.mid(i)!="7"&&str.mid(i)!="8"&&str.mid(i)!="9")
            return false;
    }
    return true;
}

void detectDialog::newParticipant(const QString &nick)
{
    if (nick.isEmpty())
        return;

    QColor color = ui->textEdit->textColor();
   ui-> textEdit->setTextColor(Qt::gray);
    ui->textEdit->append(tr("* %1 has joined").arg(nick));
   ui->textEdit->setTextColor(color);
    ui->listWidget->addItem(nick);
}

void detectDialog::participantLeft(const QString &nick)
{
    if (nick.isEmpty())
        return;

    QList<QListWidgetItem *> items = ui->listWidget->findItems(nick,
                                                           Qt::MatchExactly);
    if (items.isEmpty())
        return;

    delete items.at(0);
    QColor color = ui->textEdit->textColor();
   ui->textEdit->setTextColor(Qt::gray);
    ui->textEdit->append(tr("* %1 has left").arg(nick));
   ui->textEdit->setTextColor(color);
}

void detectDialog::showInformation()
{

}

detectDialog::~detectDialog()
{
    delete ui;
}
