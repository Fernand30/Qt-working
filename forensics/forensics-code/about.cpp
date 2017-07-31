#include "about.h"
#include "ui_about.h"

#include <QMouseEvent>
#include <QApplication>
#include <QGraphicsDropShadowEffect>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    completeUi();
}

About::~About()
{
    delete ui;
}
void About::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    connect(ui->closebutton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->minbutton, SIGNAL(clicked()), this, SLOT(showMinimized()));
}


void About::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton) {
        if (m_capturedMenuBar)
        {
            move(event->globalPos() - m_dragPosition);
        }
        else
        {
            QRect titleRect = ui->titlebar->frameGeometry();
            QPoint touchPos = event->globalPos() - frameGeometry().topLeft();
            if (titleRect.contains(touchPos))
            {
                m_capturedMenuBar = true;
                m_dragPosition = touchPos;
            }
        }
        event->accept();
    }
}

void About::mousePressEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
    if (event->button() == Qt::LeftButton) {
        QRect titleRect = ui->titlebar->frameGeometry();
        QPoint touchPos = event->globalPos() - frameGeometry().topLeft();
        if (titleRect.contains(touchPos))
        {
            m_capturedMenuBar = true;
            m_dragPosition = touchPos;
            event->accept();
        }
    }
}

void About::mouseReleaseEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
}
