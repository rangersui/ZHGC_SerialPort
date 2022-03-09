/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Main;
    QTextBrowser *textBrowser_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_serialopen;
    QLabel *label;
    QTextEdit *textEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QHBoxLayout *set;
    QLabel *label_29;
    QTextEdit *textEdit_speed;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_leftslow;
    QPushButton *pushButton_rightslow;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_leftquick;
    QPushButton *pushButton_rightquick;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_31;
    QTextEdit *textEdit_step;
    QPushButton *pushButton_step;
    QWidget *Parameter;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QComboBox *comboBox_5;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_4;
    QPushButton *pushButton_headdef;
    QPushButton *pushButton_clearencode;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QTextBrowser *textBrowser_leftslow;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QTextBrowser *textBrowser_rightslow;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QTextBrowser *textBrowser_leftquick;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QTextBrowser *textBrowser_rightquick;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QComboBox *comboBox_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QCheckBox *checkBox_hexsend;
    QCheckBox *checkBox_crc8;
    QCheckBox *checkBox_hexdisplay;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_9;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_send;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(801, 733);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/image/motor.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setFocusPolicy(Qt::StrongFocus);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-10, 0, 781, 701));
        QFont font;
        font.setPointSize(20);
        tabWidget->setFont(font);
        Main = new QWidget();
        Main->setObjectName(QString::fromUtf8("Main"));
        textBrowser_2 = new QTextBrowser(Main);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 0, 331, 281));
        QFont font1;
        font1.setPointSize(15);
        textBrowser_2->setFont(font1);
        layoutWidget = new QWidget(Main);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 310, 331, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_serialopen = new QPushButton(layoutWidget);
        pushButton_serialopen->setObjectName(QString::fromUtf8("pushButton_serialopen"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_serialopen->sizePolicy().hasHeightForWidth());
        pushButton_serialopen->setSizePolicy(sizePolicy);
        pushButton_serialopen->setFont(font);

        verticalLayout->addWidget(pushButton_serialopen);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(false);
        label->setFont(font2);
        label->setFocusPolicy(Qt::StrongFocus);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(textEdit);

        layoutWidget1 = new QWidget(Main);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(370, -60, 381, 681));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setSpacing(51);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 134, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(24);
        label_8->setFont(font3);
        label_8->setLayoutDirection(Qt::LeftToRight);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_8);

        set = new QHBoxLayout();
        set->setSpacing(70);
        set->setObjectName(QString::fromUtf8("set"));
        label_29 = new QLabel(layoutWidget1);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font4;
        font4.setPointSize(22);
        label_29->setFont(font4);

        set->addWidget(label_29);

        textEdit_speed = new QTextEdit(layoutWidget1);
        textEdit_speed->setObjectName(QString::fromUtf8("textEdit_speed"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit_speed->sizePolicy().hasHeightForWidth());
        textEdit_speed->setSizePolicy(sizePolicy1);
        textEdit_speed->setFont(font4);
        textEdit_speed->setFrameShadow(QFrame::Raised);
        textEdit_speed->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_speed->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        set->addWidget(textEdit_speed);


        verticalLayout_6->addLayout(set);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(47);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, -1, 0);
        pushButton_leftslow = new QPushButton(layoutWidget1);
        pushButton_leftslow->setObjectName(QString::fromUtf8("pushButton_leftslow"));
        sizePolicy1.setHeightForWidth(pushButton_leftslow->sizePolicy().hasHeightForWidth());
        pushButton_leftslow->setSizePolicy(sizePolicy1);
        pushButton_leftslow->setMaximumSize(QSize(500000, 500000));

        horizontalLayout_12->addWidget(pushButton_leftslow);

        pushButton_rightslow = new QPushButton(layoutWidget1);
        pushButton_rightslow->setObjectName(QString::fromUtf8("pushButton_rightslow"));
        sizePolicy1.setHeightForWidth(pushButton_rightslow->sizePolicy().hasHeightForWidth());
        pushButton_rightslow->setSizePolicy(sizePolicy1);
        pushButton_rightslow->setMaximumSize(QSize(500000, 1005050));

        horizontalLayout_12->addWidget(pushButton_rightslow);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(47);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, -1, -1, 0);
        pushButton_leftquick = new QPushButton(layoutWidget1);
        pushButton_leftquick->setObjectName(QString::fromUtf8("pushButton_leftquick"));
        sizePolicy1.setHeightForWidth(pushButton_leftquick->sizePolicy().hasHeightForWidth());
        pushButton_leftquick->setSizePolicy(sizePolicy1);
        pushButton_leftquick->setMaximumSize(QSize(500000, 500000));

        horizontalLayout_14->addWidget(pushButton_leftquick);

        pushButton_rightquick = new QPushButton(layoutWidget1);
        pushButton_rightquick->setObjectName(QString::fromUtf8("pushButton_rightquick"));
        sizePolicy1.setHeightForWidth(pushButton_rightquick->sizePolicy().hasHeightForWidth());
        pushButton_rightquick->setSizePolicy(sizePolicy1);
        pushButton_rightquick->setMaximumSize(QSize(500000, 1005050));

        horizontalLayout_14->addWidget(pushButton_rightquick);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(60);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_31 = new QLabel(layoutWidget1);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy1.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy1);
        label_31->setFont(font4);

        horizontalLayout_11->addWidget(label_31);

        textEdit_step = new QTextEdit(layoutWidget1);
        textEdit_step->setObjectName(QString::fromUtf8("textEdit_step"));
        sizePolicy1.setHeightForWidth(textEdit_step->sizePolicy().hasHeightForWidth());
        textEdit_step->setSizePolicy(sizePolicy1);
        textEdit_step->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_step->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_11->addWidget(textEdit_step);


        verticalLayout_6->addLayout(horizontalLayout_11);

        pushButton_step = new QPushButton(layoutWidget1);
        pushButton_step->setObjectName(QString::fromUtf8("pushButton_step"));
        sizePolicy1.setHeightForWidth(pushButton_step->sizePolicy().hasHeightForWidth());
        pushButton_step->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(pushButton_step);

        tabWidget->addTab(Main, QString());
        Parameter = new QWidget();
        Parameter->setObjectName(QString::fromUtf8("Parameter"));
        QFont font5;
        font5.setPointSize(9);
        Parameter->setFont(font5);
        layoutWidget2 = new QWidget(Parameter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 0, 691, 401));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        comboBox_5 = new QComboBox(layoutWidget2);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setMaximumSize(QSize(150, 25));
        comboBox_5->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_7->addWidget(comboBox_5);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_7->addWidget(label_7);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textEdit_4 = new QTextEdit(layoutWidget2);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textEdit_4->sizePolicy().hasHeightForWidth());
        textEdit_4->setSizePolicy(sizePolicy2);
        textEdit_4->setBaseSize(QSize(20, 20));

        verticalLayout_4->addWidget(textEdit_4);

        pushButton_headdef = new QPushButton(layoutWidget2);
        pushButton_headdef->setObjectName(QString::fromUtf8("pushButton_headdef"));

        verticalLayout_4->addWidget(pushButton_headdef);

        pushButton_clearencode = new QPushButton(layoutWidget2);
        pushButton_clearencode->setObjectName(QString::fromUtf8("pushButton_clearencode"));

        verticalLayout_4->addWidget(pushButton_clearencode);


        verticalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setSizeConstraint(QLayout::SetFixedSize);
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_7->addWidget(label_13);

        textBrowser_leftslow = new QTextBrowser(layoutWidget2);
        textBrowser_leftslow->setObjectName(QString::fromUtf8("textBrowser_leftslow"));

        horizontalLayout_7->addWidget(textBrowser_leftslow);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_9->addWidget(label_10);

        textBrowser_rightslow = new QTextBrowser(layoutWidget2);
        textBrowser_rightslow->setObjectName(QString::fromUtf8("textBrowser_rightslow"));

        horizontalLayout_9->addWidget(textBrowser_rightslow);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_5->addWidget(label_15);

        textBrowser_leftquick = new QTextBrowser(layoutWidget2);
        textBrowser_leftquick->setObjectName(QString::fromUtf8("textBrowser_leftquick"));
        sizePolicy.setHeightForWidth(textBrowser_leftquick->sizePolicy().hasHeightForWidth());
        textBrowser_leftquick->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(textBrowser_leftquick);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_6->addWidget(label_12);

        textBrowser_rightquick = new QTextBrowser(layoutWidget2);
        textBrowser_rightquick->setObjectName(QString::fromUtf8("textBrowser_rightquick"));

        horizontalLayout_6->addWidget(textBrowser_rightquick);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_9->addLayout(verticalLayout_3);


        horizontalLayout_10->addLayout(verticalLayout_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(label_4);

        comboBox_2 = new QComboBox(layoutWidget2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_2->addWidget(comboBox_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(label_5);

        comboBox_3 = new QComboBox(layoutWidget2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(comboBox_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_8->addWidget(label_11);

        comboBox_8 = new QComboBox(layoutWidget2);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_8->addWidget(comboBox_8);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(label_6);

        comboBox_4 = new QComboBox(layoutWidget2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(comboBox_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        checkBox_hexsend = new QCheckBox(layoutWidget2);
        checkBox_hexsend->setObjectName(QString::fromUtf8("checkBox_hexsend"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(checkBox_hexsend->sizePolicy().hasHeightForWidth());
        checkBox_hexsend->setSizePolicy(sizePolicy3);
        checkBox_hexsend->setMaximumSize(QSize(100, 25));
        checkBox_hexsend->setTristate(false);

        verticalLayout_2->addWidget(checkBox_hexsend);

        checkBox_crc8 = new QCheckBox(layoutWidget2);
        checkBox_crc8->setObjectName(QString::fromUtf8("checkBox_crc8"));
        sizePolicy.setHeightForWidth(checkBox_crc8->sizePolicy().hasHeightForWidth());
        checkBox_crc8->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(checkBox_crc8);

        checkBox_hexdisplay = new QCheckBox(layoutWidget2);
        checkBox_hexdisplay->setObjectName(QString::fromUtf8("checkBox_hexdisplay"));
        sizePolicy3.setHeightForWidth(checkBox_hexdisplay->sizePolicy().hasHeightForWidth());
        checkBox_hexdisplay->setSizePolicy(sizePolicy3);
        checkBox_hexdisplay->setMaximumSize(QSize(16777215, 25));

        verticalLayout_2->addWidget(checkBox_hexdisplay);


        verticalLayout_8->addLayout(verticalLayout_2);


        horizontalLayout_10->addLayout(verticalLayout_8);


        horizontalLayout_16->addLayout(horizontalLayout_10);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_20->addWidget(label_9);

        textBrowser = new QTextBrowser(layoutWidget2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_20->addWidget(textBrowser);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_20->addWidget(label_2);

        textEdit_2 = new QTextEdit(layoutWidget2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_20->addWidget(textEdit_2);

        pushButton_send = new QPushButton(layoutWidget2);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));

        verticalLayout_20->addWidget(pushButton_send);


        horizontalLayout_16->addLayout(verticalLayout_20);

        tabWidget->addTab(Parameter, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">\344\275\277\347\224\250\350\257\264\346\230\216</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">1\343\200\201\344\275\277\347\224\250\345\211\215\350\257\267\347\202\271\345\207\273\350\277\236\346\216\245\350\256\276\345\244\207\346\214\211\351\222\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">2\343\200\201\345\273\272\350\256\256\351\200\237\345\272\246\350\214\203\345\233\2640-500(Hz)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">3\343\200\201\344\275\215\347\275\256\350\214\203\345\233\2640-2805(\346\255\245\346\225\260\357\274\211</span></p></body></html>", nullptr));
        pushButton_serialopen->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\350\256\276\345\244\207", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\344\275\215\347\275\256(CM)", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:72pt;\">0</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\351\200\232\347\224\250\350\277\220\345\212\250\346\216\247\345\210\266\347\263\273\347\273\237", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "\351\200\237\345\272\246\357\274\210Hz\357\274\211\357\274\232", nullptr));
        textEdit_speed->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:22pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">200</p></body></html>", nullptr));
        pushButton_leftslow->setText(QString());
        pushButton_rightslow->setText(QString());
        pushButton_leftquick->setText(QCoreApplication::translate("MainWindow", "0CM", nullptr));
        pushButton_rightquick->setText(QCoreApplication::translate("MainWindow", "52CM", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\346\255\245\346\225\260\357\274\232", nullptr));
        textEdit_step->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:22pt;\">500</span></p></body></html>", nullptr));
        pushButton_step->setText(QCoreApplication::translate("MainWindow", "\346\255\245\346\225\260\347\247\273\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Main), QCoreApplication::translate("MainWindow", "\344\270\273\351\241\265", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "\345\220\221\345\267\246\346\205\242\351\200\237\345\256\232\344\271\211", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "\345\220\221\345\217\263\346\205\242\351\200\237\345\256\232\344\271\211", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "\345\220\221\345\267\246\345\277\253\351\200\237\345\256\232\344\271\211", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "\345\220\221\345\217\263\345\277\253\351\200\237\345\256\232\344\271\211", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\345\217\257\347\274\226\347\250\213\346\214\211\351\224\256\347\252\227\345\217\243", nullptr));
        pushButton_headdef->setText(QCoreApplication::translate("MainWindow", "\347\274\226\347\240\201\345\256\232\344\271\211", nullptr));
        pushButton_clearencode->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\347\274\226\347\240\201", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\345\220\221\345\267\246\346\205\242\351\200\237\347\247\273\345\212\250\347\274\226\347\240\201\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\345\220\221\345\217\263\346\205\242\351\200\237\347\247\273\345\212\250\347\274\226\347\240\201\357\274\232", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\346\234\200\345\267\246\347\247\273\345\212\250\347\274\226\347\240\201\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\346\234\200\345\217\263\347\247\273\345\212\250\347\274\226\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "600", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "1200", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("MainWindow", "2400", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("MainWindow", "4800", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("MainWindow", "115200", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("MainWindow", "230400", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "5", nullptr));

        label_11->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "\345\201\266", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "\345\245\207", nullptr));

        checkBox_hexsend->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        checkBox_crc8->setText(QCoreApplication::translate("MainWindow", "CRC8\346\240\241\351\252\214", nullptr));
        checkBox_hexdisplay->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\207\252\344\270\273\350\260\203\350\257\225\347\252\227\345\217\243", nullptr));
        pushButton_send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\350\260\203\350\257\225\346\225\260\346\215\256", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Parameter), QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
