#include "imagingsettings.h"
#include "ui_imagingsettings.h"

imagingSettings::imagingSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imagingSettings)
{
    ui->setupUi(this);
}

imagingSettings::~imagingSettings()
{
    delete ui;
}
