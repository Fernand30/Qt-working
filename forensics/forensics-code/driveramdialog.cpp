#include "driveramdialog.h"
#include "ui_driveramdialog.h"

#include <QMouseEvent>
#include <QApplication>
#include <QGraphicsDropShadowEffect>

#include "qfiledialog.h"
#include "qdebug.h"

driveramDialog::driveramDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::driveramDialog)
{
    completeUi();;
}

driveramDialog::~driveramDialog()
{
    delete ui;
}

void driveramDialog::showDialog()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                    tr("Images (*.*)"));
    ui->lineEdit->setText(fileName);
}

void driveramDialog::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    connect(ui->closebutton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->minbutton, SIGNAL(clicked()), this, SLOT(showMinimized()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(showDialog()));
    ui->treeWidget->header()->hide();
}


void driveramDialog::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton) {
        if (m_capturedMenuBar)
        {
            move(event->globalPos() - m_dragPosition);
        }
        else
        {
            QRect titleRect = ui->titlebar->frameGeometry();
            QPoint touchPos = event->globalPos() - frameGeometry().topLeft();
            if (titleRect.contains(touchPos))
            {
                m_capturedMenuBar = true;
                m_dragPosition = touchPos;
            }
        }
        event->accept();
    }
}

void driveramDialog::mousePressEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
    if (event->button() == Qt::LeftButton) {
        QRect titleRect = ui->titlebar->frameGeometry();
        QPoint touchPos = event->globalPos() - frameGeometry().topLeft();
        if (titleRect.contains(touchPos))
        {
            m_capturedMenuBar = true;
            m_dragPosition = touchPos;
            event->accept();
        }
    }
}

void driveramDialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
}

void driveramDialog::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
        ui->widget->show();
    else
        ui->widget->hide();
}
void driveramDialog::on_pushButton_7_clicked()
{
    ui->pushButton_8->setChecked(false);
    ui->pushButton_9->setChecked(false);
    ui->pushButton_10->setChecked(false);
}
void driveramDialog::on_pushButton_8_clicked()
{
    ui->pushButton_7->setChecked(false);
    ui->pushButton_9->setChecked(false);
    ui->pushButton_10->setChecked(false);
}

void driveramDialog::on_pushButton_9_clicked()
{
    ui->pushButton_8->setChecked(false);
    ui->pushButton_7->setChecked(false);
    ui->pushButton_10->setChecked(false);
}

void driveramDialog::on_pushButton_10_clicked()
{
    ui->pushButton_8->setChecked(false);
    ui->pushButton_9->setChecked(false);
    ui->pushButton_7->setChecked(false);
}
