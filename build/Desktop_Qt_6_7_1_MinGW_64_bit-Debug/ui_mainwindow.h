/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *page_4;
    QPushButton *easy;
    QPushButton *medium;
    QPushButton *hard;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *playername;
    QSpacerItem *horizontalSpacer_7;
    QLabel *question;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *r1;
    QPushButton *r2;
    QPushButton *r3;
    QPushButton *r4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *playername_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *question_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_6;
    QPushButton *r1_2;
    QPushButton *r2_2;
    QPushButton *r3_2;
    QPushButton *r4_2;
    QSpacerItem *horizontalSpacer_11;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QLabel *playername_3;
    QSpacerItem *horizontalSpacer_13;
    QLabel *question_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_8;
    QPushButton *r1_3;
    QPushButton *r2_3;
    QPushButton *r3_3;
    QPushButton *r4_3;
    QSpacerItem *horizontalSpacer_15;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_16;
    QLabel *playername_4;
    QSpacerItem *horizontalSpacer_17;
    QLabel *question_4;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *verticalLayout_10;
    QPushButton *r1_4;
    QPushButton *r2_4;
    QPushButton *r3_4;
    QPushButton *r4_4;
    QSpacerItem *horizontalSpacer_19;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QLabel *playername_5;
    QSpacerItem *horizontalSpacer_21;
    QLabel *question_5;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_22;
    QVBoxLayout *verticalLayout_12;
    QPushButton *r1_5;
    QPushButton *r2_5;
    QPushButton *r3_5;
    QPushButton *r4_5;
    QSpacerItem *horizontalSpacer_23;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 236, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 236, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        easy = new QPushButton(page_4);
        easy->setObjectName("easy");
        easy->setGeometry(QRect(330, 150, 103, 33));
        medium = new QPushButton(page_4);
        medium->setObjectName("medium");
        medium->setGeometry(QRect(330, 220, 103, 33));
        hard = new QPushButton(page_4);
        hard->setObjectName("hard");
        hard->setGeometry(QRect(330, 320, 103, 33));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea = new QScrollArea(page_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 754, 525));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        playername = new QLabel(page_2);
        playername->setObjectName("playername");

        horizontalLayout_3->addWidget(playername);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_5->addLayout(horizontalLayout_3);

        question = new QLabel(page_2);
        question->setObjectName("question");

        verticalLayout_5->addWidget(question);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        r1 = new QPushButton(page_2);
        r1->setObjectName("r1");

        verticalLayout_4->addWidget(r1);

        r2 = new QPushButton(page_2);
        r2->setObjectName("r2");

        verticalLayout_4->addWidget(r2);

        r3 = new QPushButton(page_2);
        r3->setObjectName("r3");

        verticalLayout_4->addWidget(r3);

        r4 = new QPushButton(page_2);
        r4->setObjectName("r4");

        verticalLayout_4->addWidget(r4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_5->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayout_7 = new QVBoxLayout(page_5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        playername_2 = new QLabel(page_5);
        playername_2->setObjectName("playername_2");

        horizontalLayout_4->addWidget(playername_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_7->addLayout(horizontalLayout_4);

        question_2 = new QLabel(page_5);
        question_2->setObjectName("question_2");

        verticalLayout_7->addWidget(question_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        r1_2 = new QPushButton(page_5);
        r1_2->setObjectName("r1_2");

        verticalLayout_6->addWidget(r1_2);

        r2_2 = new QPushButton(page_5);
        r2_2->setObjectName("r2_2");

        verticalLayout_6->addWidget(r2_2);

        r3_2 = new QPushButton(page_5);
        r3_2->setObjectName("r3_2");

        verticalLayout_6->addWidget(r3_2);

        r4_2 = new QPushButton(page_5);
        r4_2->setObjectName("r4_2");

        verticalLayout_6->addWidget(r4_2);


        horizontalLayout_5->addLayout(verticalLayout_6);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        verticalLayout_7->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        verticalLayout_9 = new QVBoxLayout(page_6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        playername_3 = new QLabel(page_6);
        playername_3->setObjectName("playername_3");

        horizontalLayout_6->addWidget(playername_3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);


        verticalLayout_9->addLayout(horizontalLayout_6);

        question_3 = new QLabel(page_6);
        question_3->setObjectName("question_3");

        verticalLayout_9->addWidget(question_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        r1_3 = new QPushButton(page_6);
        r1_3->setObjectName("r1_3");

        verticalLayout_8->addWidget(r1_3);

        r2_3 = new QPushButton(page_6);
        r2_3->setObjectName("r2_3");

        verticalLayout_8->addWidget(r2_3);

        r3_3 = new QPushButton(page_6);
        r3_3->setObjectName("r3_3");

        verticalLayout_8->addWidget(r3_3);

        r4_3 = new QPushButton(page_6);
        r4_3->setObjectName("r4_3");

        verticalLayout_8->addWidget(r4_3);


        horizontalLayout_7->addLayout(verticalLayout_8);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);


        verticalLayout_9->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        verticalLayout_11 = new QVBoxLayout(page_7);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        playername_4 = new QLabel(page_7);
        playername_4->setObjectName("playername_4");

        horizontalLayout_8->addWidget(playername_4);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);


        verticalLayout_11->addLayout(horizontalLayout_8);

        question_4 = new QLabel(page_7);
        question_4->setObjectName("question_4");

        verticalLayout_11->addWidget(question_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_18);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        r1_4 = new QPushButton(page_7);
        r1_4->setObjectName("r1_4");

        verticalLayout_10->addWidget(r1_4);

        r2_4 = new QPushButton(page_7);
        r2_4->setObjectName("r2_4");

        verticalLayout_10->addWidget(r2_4);

        r3_4 = new QPushButton(page_7);
        r3_4->setObjectName("r3_4");

        verticalLayout_10->addWidget(r3_4);

        r4_4 = new QPushButton(page_7);
        r4_4->setObjectName("r4_4");

        verticalLayout_10->addWidget(r4_4);


        horizontalLayout_9->addLayout(verticalLayout_10);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_19);


        verticalLayout_11->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        verticalLayout_13 = new QVBoxLayout(page_8);
        verticalLayout_13->setObjectName("verticalLayout_13");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        playername_5 = new QLabel(page_8);
        playername_5->setObjectName("playername_5");

        horizontalLayout_10->addWidget(playername_5);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);


        verticalLayout_13->addLayout(horizontalLayout_10);

        question_5 = new QLabel(page_8);
        question_5->setObjectName("question_5");

        verticalLayout_13->addWidget(question_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_22);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        r1_5 = new QPushButton(page_8);
        r1_5->setObjectName("r1_5");

        verticalLayout_12->addWidget(r1_5);

        r2_5 = new QPushButton(page_8);
        r2_5->setObjectName("r2_5");

        verticalLayout_12->addWidget(r2_5);

        r3_5 = new QPushButton(page_8);
        r3_5->setObjectName("r3_5");

        verticalLayout_12->addWidget(r3_5);

        r4_5 = new QPushButton(page_8);
        r4_5->setObjectName("r4_5");

        verticalLayout_12->addWidget(r4_5);


        horizontalLayout_11->addLayout(verticalLayout_12);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_23);


        verticalLayout_13->addLayout(horizontalLayout_11);

        stackedWidget->addWidget(page_8);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "pvp mode", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "smode", nullptr));
        easy->setText(QCoreApplication::translate("MainWindow", "easy", nullptr));
        medium->setText(QCoreApplication::translate("MainWindow", "medium", nullptr));
        hard->setText(QCoreApplication::translate("MainWindow", "hard", nullptr));
        playername->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        question->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        r1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        playername_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        question_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        r1_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r2_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r3_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r4_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        playername_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        question_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        r1_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r2_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r3_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r4_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        playername_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        question_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        r1_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r2_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r3_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r4_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        playername_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        question_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        r1_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r2_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r3_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        r4_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
