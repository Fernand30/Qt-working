/********************************************************************************
** Form generated from reading UI file 'splashform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASHFORM_H
#define UI_SPLASHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_splashForm
{
public:

    void setupUi(QWidget *splashForm)
    {
        if (splashForm->objectName().isEmpty())
            splashForm->setObjectName(QStringLiteral("splashForm"));
        splashForm->resize(812, 492);
        splashForm->setStyleSheet(QLatin1String("QWidget#splashForm{	\n"
"	border-image: url(:/images/splash.png);\n"
"}"));

        retranslateUi(splashForm);

        QMetaObject::connectSlotsByName(splashForm);
    } // setupUi

    void retranslateUi(QWidget *splashForm)
    {
        splashForm->setWindowTitle(QApplication::translate("splashForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class splashForm: public Ui_splashForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASHFORM_H
