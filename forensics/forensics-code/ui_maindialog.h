/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

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

class Ui_MainDialog
{
public:
    QWidget *titlebar;
    QPushButton *minbutton;
    QPushButton *closebutton;
    QWidget *mark;
    QLabel *label_2;
    QPushButton *rambutton;
    QPushButton *diskbutton;
    QPushButton *drivebutton;
    QPushButton *disk_rambutton;
    QPushButton *exitbutton;
    QPushButton *drive_rambutton;
    QPushButton *aboutbutton;
    QPushButton *savebutton;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QStringLiteral("MainDialog"));
        MainDialog->resize(750, 430);
        MainDialog->setStyleSheet(QLatin1String("QDialog#MainDialog{\n"
"	background-image: url(:/images/mainmenu/bg.png);\n"
"}"));
        titlebar = new QWidget(MainDialog);
        titlebar->setObjectName(QStringLiteral("titlebar"));
        titlebar->setGeometry(QRect(0, 0, 750, 40));
        titlebar->setStyleSheet(QStringLiteral("fgdgaetbawetbetbqwerqerb qwr"));
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
        mark = new QWidget(titlebar);
        mark->setObjectName(QStringLiteral("mark"));
        mark->setGeometry(QRect(10, 17, 123, 23));
        mark->setStyleSheet(QLatin1String("QWidget#mark{\n"
"background-image: url(:/images/mainmenu/mark.png);\n"
"}"));
        label_2 = new QLabel(titlebar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 4, 301, 41));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	color: #787d97;\n"
"}"));
        rambutton = new QPushButton(MainDialog);
        rambutton->setObjectName(QStringLiteral("rambutton"));
        rambutton->setGeometry(QRect(20, 60, 170, 170));
        rambutton->setStyleSheet(QLatin1String("QPushButton#rambutton{\n"
"	border-image:url(:/images/mainmenu/ram_normal.png);border:0px;\n"
"	width:170px;\n"
"	height:170px;\n"
"} \n"
"QPushButton#rambutton:hover{\n"
"	border-image:url(:/images/mainmenu/ram_over.png);border:0px;\n"
"	width:186px;\n"
"	height:186px;\n"
"} \n"
"QPushButton#rambutton:pressed{\n"
"	border-image:url(:/images/mainmenu/ram_on.png);border:0px;\n"
"	width:170px;\n"
"	height:170px;\n"
"}"));
        diskbutton = new QPushButton(MainDialog);
        diskbutton->setObjectName(QStringLiteral("diskbutton"));
        diskbutton->setGeometry(QRect(200, 60, 170, 170));
        diskbutton->setStyleSheet(QLatin1String("QPushButton#diskbutton{\n"
"	border-image:url(:/images/mainmenu/disk_normal.png);border:0px;\n"
"} \n"
"QPushButton#diskbutton:hover{\n"
"	border-image:url(:/images/mainmenu/disk_over.png);border:0px\n"
"} \n"
"QPushButton#diskbutton:pressed{\n"
"	border-image:url(:/images/mainmenu/disk_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        drivebutton = new QPushButton(MainDialog);
        drivebutton->setObjectName(QStringLiteral("drivebutton"));
        drivebutton->setGeometry(QRect(380, 60, 170, 170));
        drivebutton->setStyleSheet(QLatin1String("QPushButton#drivebutton{\n"
"	border-image:url(:/images/mainmenu/drive_normal.png);border:0px;\n"
"} \n"
"QPushButton#drivebutton:hover{\n"
"	border-image:url(:/images/mainmenu/drive_over.png);border:0px\n"
"} \n"
"QPushButton#drivebutton:pressed{\n"
"	border-image:url(:/images/mainmenu/drive_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        disk_rambutton = new QPushButton(MainDialog);
        disk_rambutton->setObjectName(QStringLiteral("disk_rambutton"));
        disk_rambutton->setGeometry(QRect(560, 60, 170, 170));
        disk_rambutton->setStyleSheet(QLatin1String("QPushButton#disk_rambutton{\n"
"	border-image:url(:/images/mainmenu/disk_ram_normal.png);border:0px;\n"
"} \n"
"QPushButton#disk_rambutton:hover{\n"
"	border-image:url(:/images/mainmenu/disk_ram_over.png);border:0px\n"
"} \n"
"QPushButton#disk_rambutton:pressed{\n"
"	border-image:url(:/images/mainmenu/disk_ram_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        exitbutton = new QPushButton(MainDialog);
        exitbutton->setObjectName(QStringLiteral("exitbutton"));
        exitbutton->setGeometry(QRect(560, 240, 170, 170));
        exitbutton->setStyleSheet(QLatin1String("QPushButton#exitbutton{\n"
"	border-image:url(:/images/mainmenu/exit_normal.png);border:0px;\n"
"} \n"
"QPushButton#exitbutton:hover{\n"
"	border-image:url(:/images/mainmenu/exit_over.png);border:0px\n"
"} \n"
"QPushButton#exitbutton:pressed{\n"
"	border-image:url(:/images/mainmenu/exit_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        drive_rambutton = new QPushButton(MainDialog);
        drive_rambutton->setObjectName(QStringLiteral("drive_rambutton"));
        drive_rambutton->setGeometry(QRect(20, 240, 170, 170));
        drive_rambutton->setStyleSheet(QLatin1String("QPushButton#drive_rambutton{\n"
"	border-image:url(:/images/mainmenu/drive_ram_normal.png);border:0px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"	border-bottom-left-radius: 3px;\n"
"	border-bottom-right-radius: 3px;\n"
"} \n"
"QPushButton#drive_rambutton:hover{\n"
"	border-image:url(:/images/mainmenu/drive_ram_over.png);border:0px;\n"
"	border-radius: 3px;\n"
"} \n"
"QPushButton#drive_rambutton:pressed{\n"
"	border-image:url(:/images/mainmenu/drive_ram_on.png); position: relative;top: 1px; left: 1px;\n"
"	border-radius: 3px;\n"
"}"));
        aboutbutton = new QPushButton(MainDialog);
        aboutbutton->setObjectName(QStringLiteral("aboutbutton"));
        aboutbutton->setGeometry(QRect(380, 240, 170, 170));
        aboutbutton->setStyleSheet(QLatin1String("QPushButton#aboutbutton{\n"
"	border-image:url(:/images/mainmenu/about_normal.png);border:0px;\n"
"} \n"
"QPushButton#aboutbutton:hover{\n"
"	border-image:url(:/images/mainmenu/about_over.png);border:0px\n"
"} \n"
"QPushButton#aboutbutton:pressed{\n"
"	border-image:url(:/images/mainmenu/about_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        savebutton = new QPushButton(MainDialog);
        savebutton->setObjectName(QStringLiteral("savebutton"));
        savebutton->setGeometry(QRect(200, 240, 170, 170));
        savebutton->setStyleSheet(QLatin1String("QPushButton#savebutton{\n"
"	border-image:url(:/images/mainmenu/save_normal.png);border:0px;\n"
"} \n"
"QPushButton#savebutton:hover{\n"
"	border-image:url(:/images/mainmenu/save_over.png);border:0px\n"
"} \n"
"QPushButton#savebutton:pressed{\n"
"	border-image:url(:/images/mainmenu/save_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));

        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "Dialog", Q_NULLPTR));
        minbutton->setText(QString());
        closebutton->setText(QString());
        label_2->setText(QApplication::translate("MainDialog", "Forensics Image Acquisition Helper", Q_NULLPTR));
        rambutton->setText(QString());
        diskbutton->setText(QString());
        drivebutton->setText(QString());
        disk_rambutton->setText(QString());
        exitbutton->setText(QString());
        drive_rambutton->setText(QString());
        aboutbutton->setText(QString());
        savebutton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
