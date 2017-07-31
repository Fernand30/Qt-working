#ifndef SPLASHFORM_H
#define SPLASHFORM_H

#include <QWidget>

namespace Ui {
class splashForm;
}

class splashForm : public QWidget
{
    Q_OBJECT

public:
    explicit splashForm(QWidget *parent = 0);
    ~splashForm();

private:
    Ui::splashForm *ui;
    void completeUi();
private slots:
    void    updateCaption();
};

#endif // SPLASHFORM_H
