#include "maindialog.h"
#include "ui_maindialog.h"

#include "acquireramimage.h"
#include "about.h"
#include "diskdialog.h"
#include "drivedialog.h"
#include "diskramdialog.h"
#include "driveramdialog.h"
#include "savedialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    completeUi();
    connect(ui->rambutton, SIGNAL(clicked()), this, SLOT(ram()));
    connect(ui->diskbutton, SIGNAL(clicked()), this, SLOT(disk()));
    connect(ui->drivebutton, SIGNAL(clicked()), this, SLOT(drive()));
    connect(ui->disk_rambutton, SIGNAL(clicked()), this, SLOT(disk_ram()));
    connect(ui->drive_rambutton, SIGNAL(clicked()), this, SLOT(drive_ram()));
    connect(ui->savebutton, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->aboutbutton, SIGNAL(clicked()), this, SLOT(about()));
    connect(ui->exitbutton, SIGNAL(clicked()), this, SLOT(exitt()));
}

MainDialog::~MainDialog()
{
    delete ui;
}
void MainDialog::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    connect(ui->closebutton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->minbutton, SIGNAL(clicked()), this, SLOT(showMinimized()));
}
void MainDialog::mouseMoveEvent(QMouseEvent *event)
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

void MainDialog::mousePressEvent(QMouseEvent *event)
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

void MainDialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
}
void MainDialog::ram()
{
    AcquireRamImage  * ui = new AcquireRamImage();
    ui->exec();
}

void MainDialog::about()
{
    About  * ui = new About();
    ui->exec();
}

void MainDialog::exitt()
{
    close();
}

void MainDialog::disk()
{
    diskDialog  * ui = new diskDialog();
    ui->exec();
}

void MainDialog::drive()
{
    driveDialog  * ui = new driveDialog();
    ui->exec();
}

void MainDialog::disk_ram()
{
    diskramDialog  * ui = new diskramDialog();
    ui->exec();
}

void MainDialog::drive_ram()
{
    driveramDialog  * ui = new driveramDialog();
    ui->exec();
}

void MainDialog::save()
{
    saveDialog  * ui = new saveDialog();
    ui->exec();
}


