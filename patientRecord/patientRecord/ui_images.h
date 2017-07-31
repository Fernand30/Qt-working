/********************************************************************************
** Form generated from reading UI file 'images.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGES_H
#define UI_IMAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Images
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_first;
    QVBoxLayout *verticalLayout;
    QLabel *label_second;
    QLabel *label_third;
    QLabel *label_fourth;

    void setupUi(QDialog *Images)
    {
        if (Images->objectName().isEmpty())
            Images->setObjectName(QStringLiteral("Images"));
        Images->resize(1142, 540);
        Images->setStyleSheet(QLatin1String("QDialog#Images{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}"));
        gridLayout = new QGridLayout(Images);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_first = new QLabel(Images);
        label_first->setObjectName(QStringLiteral("label_first"));
        label_first->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_first);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_second = new QLabel(Images);
        label_second->setObjectName(QStringLiteral("label_second"));
        label_second->setStyleSheet(QLatin1String("QLabel#label_second{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label_second);

        label_third = new QLabel(Images);
        label_third->setObjectName(QStringLiteral("label_third"));
        label_third->setStyleSheet(QLatin1String("QLabel#label_third{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label_third);

        label_fourth = new QLabel(Images);
        label_fourth->setObjectName(QStringLiteral("label_fourth"));
        label_fourth->setStyleSheet(QLatin1String("QLabel#label_fourth{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label_fourth);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Images);

        QMetaObject::connectSlotsByName(Images);
    } // setupUi

    void retranslateUi(QDialog *Images)
    {
        Images->setWindowTitle(QApplication::translate("Images", "Images", Q_NULLPTR));
        label_first->setText(QApplication::translate("Images", "yo", Q_NULLPTR));
        label_second->setText(QApplication::translate("Images", "TextLabel", Q_NULLPTR));
        label_third->setText(QApplication::translate("Images", "TextLabel", Q_NULLPTR));
        label_fourth->setText(QApplication::translate("Images", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Images: public Ui_Images {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGES_H
