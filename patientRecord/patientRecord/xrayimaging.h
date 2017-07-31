#ifndef XRAYIMAGING_H
#define XRAYIMAGING_H

#include <QDialog>

namespace Ui {
class xrayImaging;
}

class xrayImaging : public QDialog
{
    Q_OBJECT

public:
    explicit xrayImaging(QWidget *parent = 0);
    ~xrayImaging();

private:
    Ui::xrayImaging *ui;
};

#endif // XRAYIMAGING_H
