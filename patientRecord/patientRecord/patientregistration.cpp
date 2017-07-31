#include "patientregistration.h"
#include "ui_patientregistration.h"

patientRegistration::patientRegistration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientRegistration)
{
    ui->setupUi(this);
}

patientRegistration::~patientRegistration()
{
    delete ui;
}
