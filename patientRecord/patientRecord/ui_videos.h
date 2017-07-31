/********************************************************************************
** Form generated from reading UI file 'videos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOS_H
#define UI_VIDEOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Videos
{
public:

    void setupUi(QDialog *Videos)
    {
        if (Videos->objectName().isEmpty())
            Videos->setObjectName(QStringLiteral("Videos"));
        Videos->resize(400, 300);
        Videos->setStyleSheet(QLatin1String("QDialog#Videos{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}\n"
""));

        retranslateUi(Videos);

        QMetaObject::connectSlotsByName(Videos);
    } // setupUi

    void retranslateUi(QDialog *Videos)
    {
        Videos->setWindowTitle(QApplication::translate("Videos", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Videos: public Ui_Videos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOS_H
