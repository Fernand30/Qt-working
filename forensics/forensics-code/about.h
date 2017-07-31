#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = 0);
    ~About();

protected:
    void    mouseMoveEvent(QMouseEvent *event);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseReleaseEvent(QMouseEvent *event);
private:
    QPoint          m_dragPosition;
    bool            m_capturedMenuBar;

private:
    Ui::About *ui;
    void completeUi();
};

#endif // ABOUT_H
