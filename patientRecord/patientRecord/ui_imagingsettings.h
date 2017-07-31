/********************************************************************************
** Form generated from reading UI file 'imagingsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGINGSETTINGS_H
#define UI_IMAGINGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_imagingSettings
{
public:
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QPushButton *pushButton_flipimage;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QPushButton *pushButton_2_invertimage;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QPushButton *pushButton_3_resetimage;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_13;
    QPushButton *pushButton_4_liveimage;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_14;
    QPushButton *pushButton_5_lockall;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_15;
    QPushButton *pushButton_6_lockarm;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_16;
    QPushButton *pushButton_7_locku;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_17;
    QPushButton *pushButton_8_lockcasters;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_18;
    QPushButton *pushButton_9_print;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_19;
    QPushButton *pushButton_10_save;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_20;
    QPushButton *pushButton_11_send;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_21;
    QPushButton *pushButton_12_dvr;
    QPushButton *pushButton_save;
    QDial *dial;
    QLabel *label_9;
    QComboBox *comboBox_2_anatomy;
    QComboBox *comboBox_size;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QSplitter *splitter_6;
    QLabel *label_8;
    QSlider *verticalSlider_zoom;
    QSplitter *splitter_5;
    QLabel *label_5;
    QSlider *verticalSlider_denoise;
    QSplitter *splitter_2;
    QLabel *label;
    QSlider *verticalSlider_brightness;
    QSplitter *splitter;
    QLabel *label_6;
    QSlider *verticalSlider_contrast;
    QSplitter *splitter_3;
    QLabel *label_4;
    QSlider *verticalSlider_sharpening;
    QSplitter *splitter_4;
    QLabel *label_7;
    QSlider *verticalSlider_saturation;

    void setupUi(QDialog *imagingSettings)
    {
        if (imagingSettings->objectName().isEmpty())
            imagingSettings->setObjectName(QStringLiteral("imagingSettings"));
        imagingSettings->resize(864, 615);
        imagingSettings->setStyleSheet(QLatin1String("QDialog#imagingSettings{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}"));
        formLayout = new QFormLayout(imagingSettings);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_10 = new QLabel(imagingSettings);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label_10);

        pushButton_flipimage = new QPushButton(imagingSettings);
        pushButton_flipimage->setObjectName(QStringLiteral("pushButton_flipimage"));
        pushButton_flipimage->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout->addWidget(pushButton_flipimage);


        verticalLayout_14->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_11 = new QLabel(imagingSettings);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_2->addWidget(label_11);

        pushButton_2_invertimage = new QPushButton(imagingSettings);
        pushButton_2_invertimage->setObjectName(QStringLiteral("pushButton_2_invertimage"));
        pushButton_2_invertimage->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_2->addWidget(pushButton_2_invertimage);


        verticalLayout_14->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_12 = new QLabel(imagingSettings);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_3->addWidget(label_12);

        pushButton_3_resetimage = new QPushButton(imagingSettings);
        pushButton_3_resetimage->setObjectName(QStringLiteral("pushButton_3_resetimage"));
        pushButton_3_resetimage->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_3->addWidget(pushButton_3_resetimage);


        verticalLayout_14->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_14->addItem(verticalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_13 = new QLabel(imagingSettings);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_4->addWidget(label_13);

        pushButton_4_liveimage = new QPushButton(imagingSettings);
        pushButton_4_liveimage->setObjectName(QStringLiteral("pushButton_4_liveimage"));
        pushButton_4_liveimage->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_4->addWidget(pushButton_4_liveimage);


        verticalLayout_14->addLayout(verticalLayout_4);


        horizontalLayout->addLayout(verticalLayout_14);

        horizontalSpacer_2 = new QSpacerItem(38, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_14 = new QLabel(imagingSettings);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_6->addWidget(label_14);

        pushButton_5_lockall = new QPushButton(imagingSettings);
        pushButton_5_lockall->setObjectName(QStringLiteral("pushButton_5_lockall"));
        pushButton_5_lockall->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_6->addWidget(pushButton_5_lockall);


        verticalLayout_17->addLayout(verticalLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_15 = new QLabel(imagingSettings);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        label_15->setLineWidth(1);

        verticalLayout_7->addWidget(label_15);

        pushButton_6_lockarm = new QPushButton(imagingSettings);
        pushButton_6_lockarm->setObjectName(QStringLiteral("pushButton_6_lockarm"));
        pushButton_6_lockarm->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_7->addWidget(pushButton_6_lockarm);


        verticalLayout_17->addLayout(verticalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_16 = new QLabel(imagingSettings);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font);
        label_16->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_8->addWidget(label_16);

        pushButton_7_locku = new QPushButton(imagingSettings);
        pushButton_7_locku->setObjectName(QStringLiteral("pushButton_7_locku"));
        pushButton_7_locku->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_8->addWidget(pushButton_7_locku);


        verticalLayout_17->addLayout(verticalLayout_8);

        verticalSpacer_7 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_17->addItem(verticalSpacer_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_17 = new QLabel(imagingSettings);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font);
        label_17->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_9->addWidget(label_17);

        pushButton_8_lockcasters = new QPushButton(imagingSettings);
        pushButton_8_lockcasters->setObjectName(QStringLiteral("pushButton_8_lockcasters"));
        pushButton_8_lockcasters->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_9->addWidget(pushButton_8_lockcasters);


        verticalLayout_17->addLayout(verticalLayout_9);


        horizontalLayout->addLayout(verticalLayout_17);

        horizontalSpacer_3 = new QSpacerItem(38, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_18 = new QLabel(imagingSettings);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font);
        label_18->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_10->addWidget(label_18);

        pushButton_9_print = new QPushButton(imagingSettings);
        pushButton_9_print->setObjectName(QStringLiteral("pushButton_9_print"));
        pushButton_9_print->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_10->addWidget(pushButton_9_print);


        verticalLayout_18->addLayout(verticalLayout_10);

        verticalSpacer_8 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_18->addItem(verticalSpacer_8);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_19 = new QLabel(imagingSettings);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(145, 55));
        label_19->setMaximumSize(QSize(55, 16777215));
        label_19->setFont(font);
        label_19->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_11->addWidget(label_19);

        pushButton_10_save = new QPushButton(imagingSettings);
        pushButton_10_save->setObjectName(QStringLiteral("pushButton_10_save"));
        pushButton_10_save->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_11->addWidget(pushButton_10_save);


        verticalLayout_18->addLayout(verticalLayout_11);

        verticalSpacer_9 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_18->addItem(verticalSpacer_9);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_20 = new QLabel(imagingSettings);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);
        label_20->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_12->addWidget(label_20);

        pushButton_11_send = new QPushButton(imagingSettings);
        pushButton_11_send->setObjectName(QStringLiteral("pushButton_11_send"));
        pushButton_11_send->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_12->addWidget(pushButton_11_send);


        verticalLayout_18->addLayout(verticalLayout_12);

        verticalSpacer_10 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_18->addItem(verticalSpacer_10);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_21 = new QLabel(imagingSettings);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font);
        label_21->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_13->addWidget(label_21);

        pushButton_12_dvr = new QPushButton(imagingSettings);
        pushButton_12_dvr->setObjectName(QStringLiteral("pushButton_12_dvr"));
        pushButton_12_dvr->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_13->addWidget(pushButton_12_dvr);


        verticalLayout_18->addLayout(verticalLayout_13);


        horizontalLayout->addLayout(verticalLayout_18);


        verticalLayout_15->addLayout(horizontalLayout);

        pushButton_save = new QPushButton(imagingSettings);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setMinimumSize(QSize(75, 33));
        pushButton_save->setStyleSheet(QLatin1String("QPushButton{\n"
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
""));

        verticalLayout_15->addWidget(pushButton_save);

        dial = new QDial(imagingSettings);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setStyleSheet(QStringLiteral("background-color:#2196f3;"));
        dial->setMaximum(360);

        verticalLayout_15->addWidget(dial);

        label_9 = new QLabel(imagingSettings);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_15->addWidget(label_9);

        comboBox_2_anatomy = new QComboBox(imagingSettings);
        comboBox_2_anatomy->setObjectName(QStringLiteral("comboBox_2_anatomy"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        comboBox_2_anatomy->setFont(font1);
        comboBox_2_anatomy->setStyleSheet(QLatin1String(" QComboBox {\n"
"     border: 1px solid blue;\n"
"background-color: rgb(255, 255, 255);\n"
"color: #546e7a;\n"
"font:11pt;\n"
" }\n"
"\n"
"QComboBox QAbstractItemView {\n"
"     border: 1px solid darkgray;\n"
"     selection-background-color: #60b9ff;\n"
"	 color:546e7a;\n"
" }"));

        verticalLayout_15->addWidget(comboBox_2_anatomy);

        comboBox_size = new QComboBox(imagingSettings);
        comboBox_size->setObjectName(QStringLiteral("comboBox_size"));
        comboBox_size->setFont(font1);
        comboBox_size->setStyleSheet(QLatin1String("  QComboBox {\n"
"     border: 1px solid blue;\n"
"background-color: rgb(255, 255, 255);\n"
"color: #546e7a;\n"
"font:11pt;\n"
" }\n"
"\n"
"QComboBox QAbstractItemView {\n"
"     border: 1px solid darkgray;\n"
"     selection-background-color: #60b9ff;\n"
"	 color:546e7a;\n"
" }"));

        verticalLayout_15->addWidget(comboBox_size);


        horizontalLayout_2->addLayout(verticalLayout_15);

        horizontalSpacer_4 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter_6 = new QSplitter(imagingSettings);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setOrientation(Qt::Vertical);
        label_8 = new QLabel(splitter_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        splitter_6->addWidget(label_8);
        verticalSlider_zoom = new QSlider(splitter_6);
        verticalSlider_zoom->setObjectName(QStringLiteral("verticalSlider_zoom"));
        verticalSlider_zoom->setStyleSheet(QLatin1String("QSlider::handle:vertical {\n"
"    height: 10px;\n"
"    background: #c1c5c5;\n"
"    margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        verticalSlider_zoom->setOrientation(Qt::Vertical);
        splitter_6->addWidget(verticalSlider_zoom);

        gridLayout->addWidget(splitter_6, 2, 1, 1, 1);

        splitter_5 = new QSplitter(imagingSettings);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        label_5 = new QLabel(splitter_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        splitter_5->addWidget(label_5);
        verticalSlider_denoise = new QSlider(splitter_5);
        verticalSlider_denoise->setObjectName(QStringLiteral("verticalSlider_denoise"));
        verticalSlider_denoise->setStyleSheet(QLatin1String("QSlider::handle:vertical {\n"
"    height: 10px;\n"
"    background: #c1c5c5;\n"
"    margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        verticalSlider_denoise->setMinimum(-10);
        verticalSlider_denoise->setMaximum(10);
        verticalSlider_denoise->setSingleStep(2);
        verticalSlider_denoise->setPageStep(0);
        verticalSlider_denoise->setOrientation(Qt::Vertical);
        splitter_5->addWidget(verticalSlider_denoise);

        gridLayout->addWidget(splitter_5, 2, 0, 1, 1);

        splitter_2 = new QSplitter(imagingSettings);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        splitter_2->addWidget(label);
        verticalSlider_brightness = new QSlider(splitter_2);
        verticalSlider_brightness->setObjectName(QStringLiteral("verticalSlider_brightness"));
        verticalSlider_brightness->setStyleSheet(QLatin1String("QSlider::handle:vertical {\n"
"    height: 10px;\n"
"    background: #c1c5c5;\n"
"    margin: 0 -4px; /* expand outside the groove */\n"
"}\n"
"\n"
""));
        verticalSlider_brightness->setMinimum(0);
        verticalSlider_brightness->setMaximum(250);
        verticalSlider_brightness->setSingleStep(2);
        verticalSlider_brightness->setPageStep(0);
        verticalSlider_brightness->setValue(100);
        verticalSlider_brightness->setOrientation(Qt::Vertical);
        splitter_2->addWidget(verticalSlider_brightness);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);

        splitter = new QSplitter(imagingSettings);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        splitter->addWidget(label_6);
        verticalSlider_contrast = new QSlider(splitter);
        verticalSlider_contrast->setObjectName(QStringLiteral("verticalSlider_contrast"));
        verticalSlider_contrast->setStyleSheet(QLatin1String("QSlider::handle:vertical {\n"
"    height: 10px;\n"
"    background: #c1c5c5;\n"
"    margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        verticalSlider_contrast->setMinimum(0);
        verticalSlider_contrast->setMaximum(250);
        verticalSlider_contrast->setSingleStep(2);
        verticalSlider_contrast->setPageStep(0);
        verticalSlider_contrast->setValue(100);
        verticalSlider_contrast->setOrientation(Qt::Vertical);
        splitter->addWidget(verticalSlider_contrast);

        gridLayout->addWidget(splitter, 0, 1, 1, 1);

        splitter_3 = new QSplitter(imagingSettings);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        label_4 = new QLabel(splitter_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        splitter_3->addWidget(label_4);
        verticalSlider_sharpening = new QSlider(splitter_3);
        verticalSlider_sharpening->setObjectName(QStringLiteral("verticalSlider_sharpening"));
        verticalSlider_sharpening->setStyleSheet(QLatin1String("QSlider::handle:vertical {\n"
"    height: 10px;\n"
"    background: #c1c5c5;\n"
"    margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        verticalSlider_sharpening->setMinimum(0);
        verticalSlider_sharpening->setMaximum(250);
        verticalSlider_sharpening->setSingleStep(2);
        verticalSlider_sharpening->setPageStep(0);
        verticalSlider_sharpening->setValue(100);
        verticalSlider_sharpening->setOrientation(Qt::Vertical);
        splitter_3->addWidget(verticalSlider_sharpening);

        gridLayout->addWidget(splitter_3, 1, 0, 1, 1);

        splitter_4 = new QSplitter(imagingSettings);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        label_7 = new QLabel(splitter_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));
        splitter_4->addWidget(label_7);
        verticalSlider_saturation = new QSlider(splitter_4);
        verticalSlider_saturation->setObjectName(QStringLiteral("verticalSlider_saturation"));
        verticalSlider_saturation->setStyleSheet(QLatin1String("QSlider::handle:vertical {\n"
"    height: 10px;\n"
"    background: #c1c5c5;\n"
"    margin: 0 -4px; /* expand outside the groove */\n"
"}"));
        verticalSlider_saturation->setMinimum(0);
        verticalSlider_saturation->setMaximum(250);
        verticalSlider_saturation->setSingleStep(2);
        verticalSlider_saturation->setPageStep(0);
        verticalSlider_saturation->setValue(100);
        verticalSlider_saturation->setOrientation(Qt::Vertical);
        splitter_4->addWidget(verticalSlider_saturation);

        gridLayout->addWidget(splitter_4, 1, 1, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout);


        retranslateUi(imagingSettings);

        QMetaObject::connectSlotsByName(imagingSettings);
    } // setupUi

    void retranslateUi(QDialog *imagingSettings)
    {
        imagingSettings->setWindowTitle(QApplication::translate("imagingSettings", "Dialog", Q_NULLPTR));
        label_10->setText(QApplication::translate("imagingSettings", "     Flip Image", Q_NULLPTR));
        pushButton_flipimage->setText(QString());
        label_11->setText(QApplication::translate("imagingSettings", "   Invert Image", Q_NULLPTR));
        pushButton_2_invertimage->setText(QString());
        label_12->setText(QApplication::translate("imagingSettings", "   Reset Image", Q_NULLPTR));
        pushButton_3_resetimage->setText(QString());
        label_13->setText(QApplication::translate("imagingSettings", "   Live Image", Q_NULLPTR));
        pushButton_4_liveimage->setText(QString());
        label_14->setText(QApplication::translate("imagingSettings", "      Lock All", Q_NULLPTR));
        pushButton_5_lockall->setText(QString());
        label_15->setText(QApplication::translate("imagingSettings", "      Lock Arm", Q_NULLPTR));
        pushButton_6_lockarm->setText(QString());
        label_16->setText(QApplication::translate("imagingSettings", "      Lock U", Q_NULLPTR));
        pushButton_7_locku->setText(QString());
        label_17->setText(QApplication::translate("imagingSettings", "   Lock Casters", Q_NULLPTR));
        pushButton_8_lockcasters->setText(QString());
        label_18->setText(QApplication::translate("imagingSettings", "       Print ", Q_NULLPTR));
        pushButton_9_print->setText(QString());
        label_19->setText(QApplication::translate("imagingSettings", "        Save", Q_NULLPTR));
        pushButton_10_save->setText(QString());
        label_20->setText(QApplication::translate("imagingSettings", "       Send", Q_NULLPTR));
        pushButton_11_send->setText(QString());
        label_21->setText(QApplication::translate("imagingSettings", "       DVR", Q_NULLPTR));
        pushButton_12_dvr->setText(QString());
        pushButton_save->setText(QApplication::translate("imagingSettings", "PushButton", Q_NULLPTR));
        label_9->setText(QApplication::translate("imagingSettings", "Anatomy & Size", Q_NULLPTR));
        comboBox_2_anatomy->clear();
        comboBox_2_anatomy->insertItems(0, QStringList()
         << QApplication::translate("imagingSettings", "item1", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "item2", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "item3", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "itme4", Q_NULLPTR)
        );
        comboBox_size->clear();
        comboBox_size->insertItems(0, QStringList()
         << QApplication::translate("imagingSettings", "item1", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "item2", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "item3", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "item4", Q_NULLPTR)
         << QApplication::translate("imagingSettings", "item5", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("imagingSettings", "Zoom", Q_NULLPTR));
        label_5->setText(QApplication::translate("imagingSettings", "Reduce Noise", Q_NULLPTR));
        label->setText(QApplication::translate("imagingSettings", "Brightness", Q_NULLPTR));
        label_6->setText(QApplication::translate("imagingSettings", "Contrast", Q_NULLPTR));
        label_4->setText(QApplication::translate("imagingSettings", "Sharpening", Q_NULLPTR));
        label_7->setText(QApplication::translate("imagingSettings", "Saturation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class imagingSettings: public Ui_imagingSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGINGSETTINGS_H
