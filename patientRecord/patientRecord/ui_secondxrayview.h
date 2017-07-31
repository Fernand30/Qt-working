/********************************************************************************
** Form generated from reading UI file 'secondxrayview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDXRAYVIEW_H
#define UI_SECONDXRAYVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
//#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_secondxrayview
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    //QCameraViewfinder *viewfinder;
    QLabel *label_first;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_home;
    QPushButton *pushButton_takePicture;
    QPushButton *pushButton_original;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_settings;

    void setupUi(QDialog *secondxrayview)
    {
        if (secondxrayview->objectName().isEmpty())
            secondxrayview->setObjectName(QStringLiteral("secondxrayview"));
        secondxrayview->resize(1332, 713);
        secondxrayview->setStyleSheet(QLatin1String("QDialog#secondxrayview{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(secondxrayview);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(secondxrayview);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        //viewfinder = new QCameraViewfinder(layoutWidget);
        //viewfinder->setObjectName(QStringLiteral("viewfinder"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        //sizePolicy.setHeightForWidth(viewfinder->sizePolicy().hasHeightForWidth());
       // viewfinder->setSizePolicy(sizePolicy);

        //horizontalLayout->addWidget(viewfinder);

        label_first = new QLabel(layoutWidget);
        label_first->setObjectName(QStringLiteral("label_first"));
        sizePolicy.setHeightForWidth(label_first->sizePolicy().hasHeightForWidth());
        label_first->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_first);


        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_home = new QPushButton(layoutWidget);
        pushButton_home->setObjectName(QStringLiteral("pushButton_home"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_home->sizePolicy().hasHeightForWidth());
        pushButton_home->setSizePolicy(sizePolicy1);
        pushButton_home->setMinimumSize(QSize(75, 23));
        pushButton_home->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_home);

        pushButton_takePicture = new QPushButton(layoutWidget);
        pushButton_takePicture->setObjectName(QStringLiteral("pushButton_takePicture"));
        sizePolicy1.setHeightForWidth(pushButton_takePicture->sizePolicy().hasHeightForWidth());
        pushButton_takePicture->setSizePolicy(sizePolicy1);
        pushButton_takePicture->setMinimumSize(QSize(75, 23));
        pushButton_takePicture->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_takePicture);

        pushButton_original = new QPushButton(layoutWidget);
        pushButton_original->setObjectName(QStringLiteral("pushButton_original"));
        sizePolicy1.setHeightForWidth(pushButton_original->sizePolicy().hasHeightForWidth());
        pushButton_original->setSizePolicy(sizePolicy1);
        pushButton_original->setMinimumSize(QSize(75, 23));
        pushButton_original->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_original);


        horizontalLayout_3->addLayout(verticalLayout);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_11);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_12);

        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_13);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setFont(font);
        label_14->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_14);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        label_15->setFont(font);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout_2->addWidget(label_15);

        dateTimeEdit = new QDateTimeEdit(layoutWidget1);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        sizePolicy2.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy2);
        dateTimeEdit->setMaximumSize(QSize(147, 18));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        dateTimeEdit->setFont(font1);
        dateTimeEdit->setStyleSheet(QLatin1String(" QDateTimeEdit {\n"
" border: 1px solid blue;\n"
"background-color:#f4f9f9;\n"
"color: #7ca2e6;\n"
"font:italic 14pt ;\n"
" }\n"
"\n"
""));

        horizontalLayout_2->addWidget(dateTimeEdit);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 15));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_settings = new QPushButton(layoutWidget1);
        pushButton_settings->setObjectName(QStringLiteral("pushButton_settings"));
        pushButton_settings->setMinimumSize(QSize(0, 15));
        pushButton_settings->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(pushButton_settings);


        verticalLayout_2->addLayout(horizontalLayout_2);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);


        retranslateUi(secondxrayview);

        QMetaObject::connectSlotsByName(secondxrayview);
    } // setupUi

    void retranslateUi(QDialog *secondxrayview)
    {
        secondxrayview->setWindowTitle(QApplication::translate("secondxrayview", "Dialog", Q_NULLPTR));
        label_first->setText(QString());
        pushButton_home->setText(QApplication::translate("secondxrayview", "Home", Q_NULLPTR));
        pushButton_takePicture->setText(QApplication::translate("secondxrayview", "Picture", Q_NULLPTR));
        pushButton_original->setText(QApplication::translate("secondxrayview", "Original", Q_NULLPTR));
        label_9->setText(QApplication::translate("secondxrayview", "Patient ID:", Q_NULLPTR));
        label_10->setText(QApplication::translate("secondxrayview", "Patient Name", Q_NULLPTR));
        label_11->setText(QApplication::translate("secondxrayview", "Show KV and uA", Q_NULLPTR));
        label_12->setText(QApplication::translate("secondxrayview", "Auto/Manual", Q_NULLPTR));
        label_13->setText(QApplication::translate("secondxrayview", "Dose Rate:", Q_NULLPTR));
        label_14->setText(QApplication::translate("secondxrayview", "Total Dose:", Q_NULLPTR));
        label_15->setText(QApplication::translate("secondxrayview", "Fluoro Time", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("secondxrayview", "1:1", Q_NULLPTR));
        pushButton_settings->setText(QApplication::translate("secondxrayview", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class secondxrayview: public Ui_secondxrayview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDXRAYVIEW_H
