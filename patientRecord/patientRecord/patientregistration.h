#ifndef PATIENTREGISTRATION_H
#define PATIENTREGISTRATION_H

#include <QDialog>

namespace Ui {
class patientRegistration;
}

class patientRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit patientRegistration(QWidget *parent = 0);
    ~patientRegistration();

private:
    Ui::patientRegistration *ui;
};

#endif // PATIENTREGISTRATION_H
