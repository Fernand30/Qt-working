#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class Mainmenu;
}

class Mainmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainmenu(QWidget *parent = 0);
    ~Mainmenu();
protected:
    void    mouseMoveEvent(QMouseEvent *event);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::Mainmenu *ui;
};

#endif // MAINMENU_H
