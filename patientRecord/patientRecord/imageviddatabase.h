#ifndef IMAGEVIDDATABASE_H
#define IMAGEVIDDATABASE_H

#include <QDialog>

namespace Ui {
class ImageVidDatabase;
}

class ImageVidDatabase : public QDialog
{
    Q_OBJECT

public:
    explicit ImageVidDatabase(QWidget *parent = 0);
    ~ImageVidDatabase();

private:
    Ui::ImageVidDatabase *ui;
};

#endif // IMAGEVIDDATABASE_H
