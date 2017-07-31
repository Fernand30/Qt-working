#include "diskdialog.h"
#include "ui_diskdialog.h"

#include <QMouseEvent>
#include <QApplication>
#include <QGraphicsDropShadowEffect>

#include "qfiledialog.h"
#include "qdebug.h"

diskDialog::diskDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::diskDialog)
{
    completeUi();;
}

diskDialog::~diskDialog()
{
    delete ui;
}

void diskDialog::showDialog()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home",
                                                    tr("Images (*.*)"));
    ui->lineEdit->setText(fileName);
}

void diskDialog::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    connect(ui->closebutton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->minbutton, SIGNAL(clicked()), this, SLOT(showMinimized()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(showDialog()));
    ui->treeWidget->header()->hide();
}


void diskDialog::mouseMoveEvent(QMouseEvent *event)
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

void diskDialog::mousePressEvent(QMouseEvent *event)
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

void diskDialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
}

void diskDialog::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
        ui->widget->show();
    else
        ui->widget->hide();
}
void diskDialog::on_pushButton_7_clicked()
{
    ui->pushButton_8->setChecked(false);
    ui->pushButton_9->setChecked(false);
    ui->pushButton_10->setChecked(false);
}
void diskDialog::on_pushButton_8_clicked()
{
    ui->pushButton_7->setChecked(false);
    ui->pushButton_9->setChecked(false);
    ui->pushButton_10->setChecked(false);
}

void diskDialog::on_pushButton_9_clicked()
{
    ui->pushButton_8->setChecked(false);
    ui->pushButton_7->setChecked(false);
    ui->pushButton_10->setChecked(false);
}

void diskDialog::on_pushButton_10_clicked()
{
    ui->pushButton_8->setChecked(false);
    ui->pushButton_9->setChecked(false);
    ui->pushButton_7->setChecked(false);
}
