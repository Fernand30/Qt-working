/********************************************************************************
** Form generated from reading UI file 'acquireramimage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACQUIRERAMIMAGE_H
#define UI_ACQUIRERAMIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcquireRamImage
{
public:
    QWidget *titlebar;
    QPushButton *minbutton;
    QPushButton *closebutton;
    QLabel *label_2;
    QWidget *widget;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QCheckBox *checkBox_31;
    QCheckBox *checkBox_32;
    QCheckBox *checkBox_33;
    QCheckBox *checkBox_34;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QProgressBar *progressBar_13;
    QTreeWidget *treeWidget;
    QComboBox *comboBox;

    void setupUi(QDialog *AcquireRamImage)
    {
        if (AcquireRamImage->objectName().isEmpty())
            AcquireRamImage->setObjectName(QStringLiteral("AcquireRamImage"));
        AcquireRamImage->setEnabled(true);
        AcquireRamImage->resize(750, 430);
        AcquireRamImage->setStyleSheet(QLatin1String("QDialog#AcquireRamImage{\n"
"	background-image: url(:/images/ram/bg.png);\n"
"}"));
        titlebar = new QWidget(AcquireRamImage);
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
        label_2->setGeometry(QRect(310, 4, 181, 41));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	color: #787d97;\n"
"}"));
        widget = new QWidget(AcquireRamImage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 100, 180, 200));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	background-image: url(:/images/ram/state_bg.png);\n"
"}"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 0, 180, 50));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton#pushButton_7{\n"
"border-image:url(:/images/ram/step1-on.png);\n"
"border:0px;\n"
"font:15px;\n"
"color:#7986cb;\n"
"}\n"
"QPushButton#pushButton_7:checked{\n"
"border-image: url(:/images/ram/step1-off.png);\n"
"border:0px;\n"
"}"));
        pushButton_7->setCheckable(true);
        pushButton_7->setChecked(false);
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 100, 180, 51));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton#pushButton_9 {\n"
"border-image:url(:/images/ram/step3-on.png);\n"
"border:0px;\n"
"font:15px;\n"
"color:#ff4081;\n"
"}\n"
"QPushButton#pushButton_9:checked{\n"
"border-image: url(:/images/ram/step3-off.png);\n"
"border:0px;\n"
"}"));
        pushButton_9->setCheckable(true);
        pushButton_9->setChecked(false);
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 50, 180, 50));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton#pushButton_8 {\n"
"border-image:url(:/images/ram/step2-on.png);\n"
"border:0px;\n"
"font:15px;\n"
"color:#7986cb;\n"
"}\n"
"QPushButton#pushButton_8:checked{\n"
"border-image: url(:/images/ram/step2-off.png);\n"
"border:0px;\n"
"}"));
        pushButton_8->setCheckable(true);
        pushButton_8->setChecked(false);
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(0, 151, 180, 49));
        pushButton_10->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton#pushButton_10{\n"
"border-image:url(:/images/ram/step4-on.png);\n"
"border:0px;\n"
"font:15px;\n"
"color:#424455;\n"
"}\n"
"QPushButton#pushButton_10:checked{\n"
"border-image: url(:/images/ram/step4-off.png);\n"
"border:0px;\n"
"color:#303240;\n"
"}"));
        pushButton_10->setCheckable(true);
        pushButton_10->setChecked(false);
        checkBox = new QCheckBox(AcquireRamImage);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(0, 50, 180, 50));
        checkBox->setStyleSheet(QLatin1String("\n"
"QCheckBox#checkBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/ram/wizard_upbg.png);\n"
"}\n"
"QCheckBox#checkBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/ram/wizard_downbg.png);\n"
"}"));
        checkBox->setChecked(true);
        lineEdit = new QLineEdit(AcquireRamImage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 60, 461, 30));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit#lineEdit{\n"
"	border:1px solid #d9dbea;\n"
"	color:#d2dbde;\n"
"	font:14px;\n"
"}"));
        pushButton_2 = new QPushButton(AcquireRamImage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 60, 80, 30));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton#pushButton_2{\n"
"	border:none;\n"
"	background-color:#a4a7ca;\n"
"	color:#ffffff;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
"	border-radius: 0px;\n"
"} \n"
"QPushButton#pushButton_2:hover{\n"
"	border:none;\n"
"	background-color:#7986cb;\n"
"	color:#ffffff;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
"	border-radius: 0px;\n"
"} \n"
"QPushButton#pushButton_2:pressed{\n"
"	border:none;\n"
"	background-color:#52546b;\n"
"	color:#ffffff;\n"
"	font: 11pt \"MS Shell Dlg 2\";\n"
"	border-radius: 0px;\n"
"}"));
        checkBox_31 = new QCheckBox(AcquireRamImage);
        checkBox_31->setObjectName(QStringLiteral("checkBox_31"));
        checkBox_31->setGeometry(QRect(190, 110, 111, 31));
        checkBox_31->setStyleSheet(QLatin1String("QCheckBox#checkBox_31::indicator:unchecked{\n"
"    image: url(:/images/ram/checkbox_white_off.png);\n"
"}\n"
"QCheckBox#checkBox_31::indicator:checked{\n"
"    image: url(:/images/ram/checkbox_white_on.png);\n"
"}\n"
"QCheckBox#checkBox_31{\n"
"	color:#777a99;\n"
"	font:12px;\n"
"}"));
        checkBox_31->setChecked(true);
        checkBox_32 = new QCheckBox(AcquireRamImage);
        checkBox_32->setObjectName(QStringLiteral("checkBox_32"));
        checkBox_32->setGeometry(QRect(190, 140, 111, 31));
        checkBox_32->setStyleSheet(QLatin1String("QCheckBox#checkBox_32::indicator:unchecked{\n"
"    image: url(:/images/ram/checkbox_blue_off.png);\n"
"}\n"
"QCheckBox#checkBox_32::indicator:checked{\n"
"    image: url(:/images/ram/checkbox_blue_on.png);\n"
"}\n"
"QCheckBox#checkBox_32{\n"
"	color:#777a99;\n"
"	font:12px;\n"
"}"));
        checkBox_32->setChecked(true);
        checkBox_33 = new QCheckBox(AcquireRamImage);
        checkBox_33->setObjectName(QStringLiteral("checkBox_33"));
        checkBox_33->setEnabled(false);
        checkBox_33->setGeometry(QRect(310, 110, 111, 31));
        checkBox_33->setStyleSheet(QLatin1String("QCheckBox#checkBox_33::indicator:unchecked{\n"
"    image: url(:/images/ram/check_disable.png);\n"
"}\n"
"QCheckBox#checkBox_33::indicator:checked{\n"
"    image: url(:/images/ram/check_disable.png);\n"
"}\n"
"QCheckBox#checkBox_33{\n"
"	color:#b2b4c9;\n"
"	font:12px;\n"
"}"));
        checkBox_33->setChecked(true);
        checkBox_34 = new QCheckBox(AcquireRamImage);
        checkBox_34->setObjectName(QStringLiteral("checkBox_34"));
        checkBox_34->setEnabled(false);
        checkBox_34->setGeometry(QRect(310, 140, 131, 31));
        checkBox_34->setStyleSheet(QLatin1String("QCheckBox#checkBox_34::indicator:unchecked{\n"
"    image: url(:/images/ram/checked_didable.png);\n"
"}\n"
"QCheckBox#checkBox_34::indicator:checked{\n"
"    image: url(:/images/ram/checked_didable.png);\n"
"}\n"
"QCheckBox#checkBox_34{\n"
"	color:#b2b4c9;\n"
"	font:12px;\n"
"}"));
        checkBox_34->setChecked(true);
        checkBox_3 = new QCheckBox(AcquireRamImage);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(true);
        checkBox_3->setGeometry(QRect(500, 120, 90, 44));
        checkBox_3->setStyleSheet(QLatin1String("\n"
"QCheckBox#checkBox_3::indicator::unchecked {\n"
"    image: url(:/images/ram/switch_off.png);\n"
"}\n"
"\n"
"\n"
"QCheckBox#checkBox_3::indicator:unchecked:pressed {\n"
"    image: url(:/images/ram/switch_on_press.png);\n"
"}\n"
"\n"
"QCheckBox#checkBox_3::indicator::checked {\n"
"    image: url(:/images/ram/switch_on.png);\n"
"}\n"
"\n"
"QCheckBox#checkBox_3::indicator:checked:pressed {\n"
"    image: url(:/images/ram/switch_off_press.png);\n"
"}\n"
""));
        checkBox_3->setChecked(true);
        pushButton_3 = new QPushButton(AcquireRamImage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(650, 124, 80, 30));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton#pushButton_3{\n"
"	border-image:url(:/images/ram/redo_normal.png);border:0px;\n"
"} \n"
"QPushButton#pushButton_3:hover{\n"
"	border-image:url(:/images/ram/redo_over.png);border:0px\n"
"} \n"
"QPushButton#pushButton_3:pressed{\n"
"	border-image:url(:/images/ram/redo_on.png); position: relative;top: 1px; left: 1px;\n"
"}\n"
"QPushButton#pushButton_3{\n"
"	font:13px;\n"
"	color:#ffffff;\n"
"}"));
        pushButton = new QPushButton(AcquireRamImage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 190, 100, 34));
        pushButton->setStyleSheet(QLatin1String("QPushButton#pushButton{\n"
"border:none;\n"
"background-color: #cdcedd;\n"
"color:#aaacb8;\n"
"font:16px;\n"
"border-radius:3px;\n"
"}"));
        pushButton_4 = new QPushButton(AcquireRamImage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 190, 100, 34));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton#pushButton_4{\n"
"border:none;\n"
"background-color: #52546b;\n"
"color:#ffffff;\n"
"font:16px;\n"
"border-radius:3px;\n"
"}"));
        pushButton_5 = new QPushButton(AcquireRamImage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(520, 190, 100, 34));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton#pushButton_5{\n"
"border:none;\n"
"background-color: #7986cb;\n"
"color:#ffffff;\n"
"font:16px;\n"
"border-radius:3px;\n"
"}"));
        pushButton_6 = new QPushButton(AcquireRamImage);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(630, 190, 100, 34));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton#pushButton_6{\n"
"border:none;\n"
"background-color: #a4a7ca;\n"
"color:#ffffff;\n"
"font:16px;\n"
"border-radius:3px;\n"
"}"));
        progressBar_13 = new QProgressBar(AcquireRamImage);
        progressBar_13->setObjectName(QStringLiteral("progressBar_13"));
        progressBar_13->setGeometry(QRect(210, 240, 501, 7));
        progressBar_13->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 1px solid #cdcedd;\n"
"    background-color: #cdcedd;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #b388ff;\n"
"    width: 300px;\n"
"}"));
        progressBar_13->setValue(24);
        progressBar_13->setTextVisible(false);
        treeWidget = new QTreeWidget(AcquireRamImage);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem3->setCheckState(0, Qt::Unchecked);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem4->setCheckState(0, Qt::Checked);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(200, 260, 300, 151));
        treeWidget->setStyleSheet(QLatin1String("\n"
" QTreeView{\n"
"		border-style:1px,solid #e8eaf6 ;\n"
"		color:#777a99;\n"
"		font:12pt;\n"
"background:#e8eaf6;\n"
"}\n"
"QTreeView::branch:closed:has-children{\n"
"   image: url(:/images/ram/icon1.png) ;\n"
"\n"
" }\n"
" \n"
"QTreeView::branch:open:has-children{\n"
"   image: url(:/images/ram/icon2.png) ; \n"
"\n"
"}"));
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setLineWidth(1);
        treeWidget->setMidLineWidth(0);
        treeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        treeWidget->setTabKeyNavigation(false);
        treeWidget->setIconSize(QSize(0, 0));
        treeWidget->setAutoExpandDelay(-1);
        treeWidget->setSortingEnabled(false);
        treeWidget->setHeaderHidden(true);
        treeWidget->setExpandsOnDoubleClick(false);
        treeWidget->setColumnCount(1);
        treeWidget->header()->setVisible(false);
        comboBox = new QComboBox(AcquireRamImage);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(570, 260, 161, 25));
        QPalette palette;
        QBrush brush(QColor(84, 110, 122, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        comboBox->setPalette(palette);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QLatin1String(" QComboBox {\n"
"    border-style: solid;\n"
"border:2px;\n"
"    border-radius: 0px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: #546e7a;\n"
"\n"
"font:11pt;\n"
" }\n"
"QComboBox::down-arrow {\n"
"    image:  url(:/images/ram/combobox_arrow.png);\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"     selection-background-color: #7986cb;\n"
"	 color:f8f8fc;\n"
" }"));
        comboBox->setDuplicatesEnabled(false);
        comboBox->setFrame(true);

        retranslateUi(AcquireRamImage);

        QMetaObject::connectSlotsByName(AcquireRamImage);
    } // setupUi

    void retranslateUi(QDialog *AcquireRamImage)
    {
        AcquireRamImage->setWindowTitle(QApplication::translate("AcquireRamImage", "Dialog", Q_NULLPTR));
        minbutton->setText(QString());
        closebutton->setText(QString());
        label_2->setText(QApplication::translate("AcquireRamImage", "Acquire Ram Image", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AcquireRamImage", "Step     1", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("AcquireRamImage", "Step     3", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("AcquireRamImage", "Step     2", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("AcquireRamImage", "Step     4", Q_NULLPTR));
        checkBox->setText(QString());
        lineEdit->setText(QApplication::translate("AcquireRamImage", "c:\\ProgramFiles\\Adbobe\\Adbobe2017", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AcquireRamImage", "Browse", Q_NULLPTR));
        checkBox_31->setText(QApplication::translate("AcquireRamImage", "CheckBox Off", Q_NULLPTR));
        checkBox_32->setText(QApplication::translate("AcquireRamImage", "CheckBox On", Q_NULLPTR));
        checkBox_33->setText(QApplication::translate("AcquireRamImage", "Check Desable", Q_NULLPTR));
        checkBox_34->setText(QApplication::translate("AcquireRamImage", "Checked Desable", Q_NULLPTR));
        checkBox_3->setText(QString());
        pushButton_3->setText(QApplication::translate("AcquireRamImage", "      Redo", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AcquireRamImage", "Button", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AcquireRamImage", "Button", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AcquireRamImage", "Button", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AcquireRamImage", "Button", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("AcquireRamImage", " TreeView", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("AcquireRamImage", " TreeView", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("AcquireRamImage", " TreeView", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem->child(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("AcquireRamImage", " TreeView", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QApplication::translate("AcquireRamImage", "TreeView", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem3->child(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("AcquireRamImage", "TreeView", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AcquireRamImage", "ComboBox1", Q_NULLPTR)
         << QApplication::translate("AcquireRamImage", "ComboBox2", Q_NULLPTR)
         << QApplication::translate("AcquireRamImage", "ComboBox3", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class AcquireRamImage: public Ui_AcquireRamImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACQUIRERAMIMAGE_H
