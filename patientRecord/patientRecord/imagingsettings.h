#ifndef IMAGINGSETTINGS_H
#define IMAGINGSETTINGS_H

#include <QDialog>

namespace Ui {
class imagingSettings;
}

class imagingSettings : public QDialog
{
    Q_OBJECT

public:
    explicit imagingSettings(QWidget *parent = 0);
    ~imagingSettings();

private:
    Ui::imagingSettings *ui;
};

#endif // IMAGINGSETTINGS_H
