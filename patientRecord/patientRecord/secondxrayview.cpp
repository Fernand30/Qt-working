#include "secondxrayview.h"
#include "ui_secondxrayview.h"

secondxrayview::secondxrayview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondxrayview)
{
    ui->setupUi(this);
}

secondxrayview::~secondxrayview()
{
    delete ui;
}
