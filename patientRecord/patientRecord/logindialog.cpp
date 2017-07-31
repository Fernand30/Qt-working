#include "logindialog.h"
#include "ui_logindialog.h"

#include <QMouseEvent>
#include <QApplication>
#include <QGraphicsDropShadowEffect>

#include "qdebug.h"


loginDialog::loginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDialog)
{
    completeUi();
}

loginDialog::~loginDialog()
{
    delete ui;
}
void loginDialog::completeUi()
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->setupUi(this);
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
    ui->usernameLabel->setText(" user name");
    ui->passwordLabel->setText(" user password");
    //ui->usernameLabel->setBuddy(ui->usernameEdit);
    connect(ui->closebutton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->minbutton, SIGNAL(clicked()), this, SLOT(showMinimized()));
    connect(ui->usernameEdit, SIGNAL(textChanged(QString)), this, SLOT(on_usernameEdit_textChanged()));
    connect(ui->passwordEdit, SIGNAL(textChanged(QString)), this, SLOT(on_passwordEdit_textChanged()));
}

void loginDialog::on_usernameEdit_textChanged()
{
    if(ui->usernameEdit->text().isEmpty())
        ui->usernameLabel->setText(" user name");
    else ui->usernameLabel->setText("");
}

void loginDialog::on_passwordEdit_textChanged()
{
    if(ui->passwordEdit->text().isEmpty())
        ui->passwordLabel->setText(" user password");
    else ui->passwordLabel->setText("");
}
/////////////////////////////////////////////////////

void loginDialog::mouseMoveEvent(QMouseEvent *event)
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

void loginDialog::mousePressEvent(QMouseEvent *event)
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

void loginDialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_capturedMenuBar = false;
}
