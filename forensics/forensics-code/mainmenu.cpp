#include "mainmenu.h"
#include "ui_mainmenu.h"

Mainmenu::Mainmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainmenu)
{
    ui->setupUi(this);
}

Mainmenu::~Mainmenu()
{
    delete ui;
}
void Mainmenu::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    connect(ui->pushButton_3, SIGNAL(clicked()), qApp, SLOT(closeAllWindows()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(showMinimized()));
}
void Mainmenu::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() && Qt::LeftButton) {
        if (m_capturedMenuBar)
        {
            move(event->globalPos() - m_dragPosition);
        }
        else
        {
            QRect titleRect = ui->widget_2->frameGeometry();
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

void Mainmenu::mousePressEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
    if (event->button() == Qt::LeftButton) {
        QRect titleRect = ui->widget_2->frameGeometry();
        QPoint touchPos = event->globalPos() - frameGeometry().topLeft();
        if (titleRect.contains(touchPos))
        {
            m_capturedMenuBar = true;
            m_dragPosition = touchPos;
            event->accept();
        }
    }
}

void Mainmenu::mouseReleaseEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
}
