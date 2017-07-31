#ifndef SECONDXRAYVIEW_H
#define SECONDXRAYVIEW_H

#include <QDialog>

namespace Ui {
class secondxrayview;
}

class secondxrayview : public QDialog
{
    Q_OBJECT

public:
    explicit secondxrayview(QWidget *parent = 0);
    ~secondxrayview();

private:
    Ui::secondxrayview *ui;
};

#endif // SECONDXRAYVIEW_H
