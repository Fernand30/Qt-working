/********************************************************************************
** Form generated from reading UI file 'xrayimaging.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRAYIMAGING_H
#define UI_XRAYIMAGING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
//#include "cvimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_xrayImaging
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    //CVImageWidget *viefinder;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QLabel *label_lastimage;
    QWidget *widget_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    //CVImageWidget *label_first;
    QPushButton *pushButton_takePicture;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_printer;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *xrayImaging)
    {
        if (xrayImaging->objectName().isEmpty())
            xrayImaging->setObjectName(QStringLiteral("xrayImaging"));
        xrayImaging->resize(1929, 617);
        xrayImaging->setStyleSheet(QLatin1String("QDialog#xrayImaging{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}\n"
""));
        verticalLayout_3 = new QVBoxLayout(xrayImaging);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(1800, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(xrayImaging);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(75, 33));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        stackedWidget = new QStackedWidget(xrayImaging);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QLatin1String("\n"
"	background-color: #f4f9f9;\n"
"    background-image: url(url(:/new/Images/Chosen Button 1.png));\n"
"    background-attachment: fixed;\n"
"	color:#7ca2e6;"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ////viefinder = new CVImageWidget(page);
        //viefinder->setObjectName(QStringLiteral("viefinder"));
       // viefinder->setFocusPolicy(Qt::ClickFocus);

        //verticalLayout_2->addWidget(viefinder);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_lastimage = new QLabel(page_2);
        label_lastimage->setObjectName(QStringLiteral("label_lastimage"));

        gridLayout->addWidget(label_lastimage, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        horizontalLayout_3->addWidget(stackedWidget);

        widget_2 = new QWidget(xrayImaging);
        widget_2->setObjectName(QStringLiteral("widget_2"));

        horizontalLayout_3->addWidget(widget_2);

        widget = new QWidget(xrayImaging);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout_3->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        //label_first = new CVImageWidget(xrayImaging);
        //label_first->setObjectName(QStringLiteral("label_first"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        //sizePolicy1.setHeightForWidth(label_first->sizePolicy().hasHeightForWidth());
        //label_first->setSizePolicy(sizePolicy1);
       // label_first->setFocusPolicy(Qt::NoFocus);

        //verticalLayout->addWidget(label_first);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        pushButton_takePicture = new QPushButton(xrayImaging);
        pushButton_takePicture->setObjectName(QStringLiteral("pushButton_takePicture"));
        sizePolicy.setHeightForWidth(pushButton_takePicture->sizePolicy().hasHeightForWidth());
        pushButton_takePicture->setSizePolicy(sizePolicy);
        pushButton_takePicture->setMinimumSize(QSize(75, 27));
        QFont font1;
        font1.setPointSize(12);
        pushButton_takePicture->setFont(font1);
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

        verticalLayout_3->addWidget(pushButton_takePicture);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label_9 = new QLabel(xrayImaging);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(12);
        label_9->setFont(font2);
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_9);

        label_10 = new QLabel(xrayImaging);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setFont(font2);
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_10);

        label_11 = new QLabel(xrayImaging);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_11);

        label_12 = new QLabel(xrayImaging);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setFont(font2);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_12);

        label_13 = new QLabel(xrayImaging);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setFont(font2);
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_13);

        label_14 = new QLabel(xrayImaging);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setFont(font2);
        label_14->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_14);

        label_15 = new QLabel(xrayImaging);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        label_15->setFont(font2);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        horizontalLayout->addWidget(label_15);

        dateTimeEdit = new QDateTimeEdit(xrayImaging);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        sizePolicy2.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy2);
        dateTimeEdit->setMinimumSize(QSize(200, 32));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        dateTimeEdit->setFont(font3);
        dateTimeEdit->setStyleSheet(QLatin1String(" QDateTimeEdit{\n"
"    border-style: solid;\n"
"border:2px;\n"
"    border-radius: 0px;\n"
"background-color:#f4f9f9;\n"
"color: #7ca2e6;\n"
"\n"
"font:Italic 14pt;\n"
" }"));

        horizontalLayout->addWidget(dateTimeEdit);

        pushButton_printer = new QPushButton(xrayImaging);
        pushButton_printer->setObjectName(QStringLiteral("pushButton_printer"));
        pushButton_printer->setMinimumSize(QSize(165, 27));
        pushButton_printer->setFont(font1);
        pushButton_printer->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout->addWidget(pushButton_printer);

        pushButton_3 = new QPushButton(xrayImaging);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(165, 27));
        pushButton_3->setFont(font2);
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

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(xrayImaging);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(165, 27));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(xrayImaging);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(xrayImaging);
    } // setupUi

    void retranslateUi(QDialog *xrayImaging)
    {
        xrayImaging->setWindowTitle(QApplication::translate("xrayImaging", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("xrayImaging", "Home", Q_NULLPTR));
        label_lastimage->setText(QString());
        pushButton_takePicture->setText(QApplication::translate("xrayImaging", "Picture", Q_NULLPTR));
        label_9->setText(QApplication::translate("xrayImaging", "Patient ID:", Q_NULLPTR));
        label_10->setText(QApplication::translate("xrayImaging", "Patient Name", Q_NULLPTR));
        label_11->setText(QApplication::translate("xrayImaging", "Show KV and uA", Q_NULLPTR));
        label_12->setText(QApplication::translate("xrayImaging", "Auto/Manual", Q_NULLPTR));
        label_13->setText(QApplication::translate("xrayImaging", "Dose Rate:", Q_NULLPTR));
        label_14->setText(QApplication::translate("xrayImaging", "Total Dose:", Q_NULLPTR));
        label_15->setText(QApplication::translate("xrayImaging", "Fluoro Time", Q_NULLPTR));
        pushButton_printer->setText(QApplication::translate("xrayImaging", "print", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("xrayImaging", "1:4", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("xrayImaging", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class xrayImaging: public Ui_xrayImaging {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRAYIMAGING_H
