#include "imageviddatabase.h"
#include "ui_imageviddatabase.h"

ImageVidDatabase::ImageVidDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageVidDatabase)
{
    ui->setupUi(this);
}

ImageVidDatabase::~ImageVidDatabase()
{
    delete ui;
}
