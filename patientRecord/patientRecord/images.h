#ifndef IMAGES_H
#define IMAGES_H

#include <QDialog>

namespace Ui {
class Images;
}

class Images : public QDialog
{
    Q_OBJECT

public:
    explicit Images(QWidget *parent = 0);
    ~Images();

private:
    Ui::Images *ui;
};

#endif // IMAGES_H
