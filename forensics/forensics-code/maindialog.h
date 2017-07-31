#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>

#include <QMouseEvent>
#include <QApplication>
#include <QGraphicsDropShadowEffect>
#include "qdebug.h"

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();
private:
    QPoint          m_dragPosition;
    bool            m_capturedMenuBar;
protected:
    void    mouseMoveEvent(QMouseEvent *event);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseReleaseEvent(QMouseEvent *event);
private slots:
    void ram();
    void disk();
    void drive();
    void disk_ram();
    void drive_ram();
    void save();
    void about();
    void exitt();
private:
    Ui::MainDialog *ui;
    void completeUi();
};

#endif // MAINDIALOG_H
