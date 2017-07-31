#ifndef PATIENTDATABASE_H
#define PATIENTDATABASE_H

#include <QDialog>

namespace Ui {
class patientdatabase;
}

class patientdatabase : public QDialog
{
    Q_OBJECT

public:
    explicit patientdatabase(QWidget *parent = 0);
    ~patientdatabase();

private:
    Ui::patientdatabase *ui;
};

#endif // PATIENTDATABASE_H
