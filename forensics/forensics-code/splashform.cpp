#include "splashform.h"
#include "ui_splashform.h"

#include "qtimer.h"
#include "maindialog.h"

splashForm::splashForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::splashForm)
{
    completeUi();
}

splashForm::~splashForm()
{
    delete ui;
}
void splashForm::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QTimer::singleShot(3000, this, SLOT(updateCaption()));
}

void splashForm::updateCaption()
{
    this->close();
    MainDialog *ui = new MainDialog();
    ui->show();
}
