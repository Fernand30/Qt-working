#include "xrayimaging.h"
#include "ui_xrayimaging.h"

xrayImaging::xrayImaging(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::xrayImaging)
{
    ui->setupUi(this);
}

xrayImaging::~xrayImaging()
{
    delete ui;
}
