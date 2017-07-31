#ifndef SPLASH_H
#define SPLASH_H

#include <QDialog>
#include "qtimer.h"

#include "maindialog.h"

namespace Ui {
class splash;
}

class splash : public QDialog
{
    Q_OBJECT

public:
    explicit splash(QWidget *parent = 0);
    ~splash();

private:
    Ui::splash *ui;
    void completeUi();
private slots:
    void    updateCaption();
};

#endif // SPLASH_H
