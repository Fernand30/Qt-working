/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QWidget *titlebar;
    QPushButton *minbutton;
    QPushButton *closebutton;
    QLabel *label_2;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(750, 430);
        About->setStyleSheet(QLatin1String("QDialog#About{\n"
"	background-color: #3f4152;\n"
"}"));
        widget = new QWidget(About);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 730, 370));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	background-color: #e8eaf6;\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(180, 30, 535, 330));
        widget_2->setStyleSheet(QLatin1String("QWidget#widget_2{\n"
"	background-image: url(:/images/about/about.png);\n"
"	border-style:none;\n"
"}"));
        titlebar = new QWidget(About);
        titlebar->setObjectName(QStringLiteral("titlebar"));
        titlebar->setGeometry(QRect(0, 0, 750, 40));
        titlebar->setStyleSheet(QStringLiteral(""));
        minbutton = new QPushButton(titlebar);
        minbutton->setObjectName(QStringLiteral("minbutton"));
        minbutton->setGeometry(QRect(670, 0, 40, 40));
        minbutton->setStyleSheet(QLatin1String("QPushButton#minbutton{\n"
"	border-image:url(:/images/mainmenu/min_normal.png);border:0px;\n"
"} \n"
"QPushButton#minbutton:hover{\n"
"	border-image:url(:/images/mainmenu/min_over.png);border:0px\n"
"} \n"
"QPushButton#minbutton:pressed{\n"
"	border-image:url(:/images/mainmenu/min_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        closebutton = new QPushButton(titlebar);
        closebutton->setObjectName(QStringLiteral("closebutton"));
        closebutton->setGeometry(QRect(710, 0, 40, 40));
        closebutton->setStyleSheet(QLatin1String("QPushButton#closebutton{\n"
"	border-image:url(:/images/mainmenu/close_normal.png);border:0px;\n"
"} \n"
"QPushButton#closebutton:hover{\n"
"	border-image:url(:/images/mainmenu/close_over.png);border:0px\n"
"} \n"
"QPushButton#closebutton:pressed{\n"
"	border-image:url(:/images/mainmenu/close_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        label_2 = new QLabel(titlebar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 4, 51, 41));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	color: #787d97;\n"
"}"));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", Q_NULLPTR));
        minbutton->setText(QString());
        closebutton->setText(QString());
        label_2->setText(QApplication::translate("About", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
