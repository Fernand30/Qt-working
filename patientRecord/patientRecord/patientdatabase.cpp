#include "patientdatabase.h"
#include "ui_patientdatabase.h"

patientdatabase::patientdatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientdatabase)
{
    ui->setupUi(this);
}

patientdatabase::~patientdatabase()
{
    delete ui;
}
