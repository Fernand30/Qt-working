/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_splash
{
public:
    QWidget *widget;

    void setupUi(QDialog *splash)
    {
        if (splash->objectName().isEmpty())
            splash->setObjectName(QStringLiteral("splash"));
        splash->resize(749, 428);
        splash->setLayoutDirection(Qt::LeftToRight);
        splash->setStyleSheet(QLatin1String("QDialog#splash{\n"
"	background:transparent;\n"
"	border-image: url(:/images/splash1.png);\n"
"\n"
"}"));
        widget = new QWidget(splash);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 749, 42));

        retranslateUi(splash);

        QMetaObject::connectSlotsByName(splash);
    } // setupUi

    void retranslateUi(QDialog *splash)
    {
        splash->setWindowTitle(QApplication::translate("splash", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class splash: public Ui_splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
