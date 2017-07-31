#include "splash.h"
#include "ui_splash.h"

splash::splash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::splash)
{
    completeUi();
}

splash::~splash()
{
    delete ui;
}
void splash::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QTimer::singleShot(3000, this, SLOT(updateCaption()));
}

void splash::updateCaption()
{
    this->close();
    MainDialog *ui = new MainDialog();
    ui->show();
}
