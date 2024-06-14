/********************************************************************************
** Form generated from reading UI file 'pvpmode_pages.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PVPMODE_PAGES_H
#define UI_PVPMODE_PAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PvPmode_pages
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextEdit *textEdit;
    QComboBox *comboBox;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QComboBox *comboBox_2;
    QTextEdit *textEdit_4;
    QComboBox *comboBox_3;
    QTextEdit *textEdit_5;
    QPushButton *pushButton;
    QWidget *page_2;
    QRadioButton *radioButton;
    QWidget *page_3;

    void setupUi(QWidget *PvPmode_pages)
    {
        if (PvPmode_pages->objectName().isEmpty())
            PvPmode_pages->setObjectName("PvPmode_pages");
        PvPmode_pages->resize(879, 556);
        verticalLayoutWidget = new QWidget(PvPmode_pages);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 871, 551));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(verticalLayoutWidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        textEdit = new QTextEdit(page);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(270, 50, 281, 51));
        textEdit->setFrameShape(QFrame::NoFrame);
        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(110, 200, 281, 41));
        textEdit_2 = new QTextEdit(page);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(110, 140, 171, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto Medium")});
        font.setPointSize(12);
        font.setBold(true);
        textEdit_2->setFont(font);
        textEdit_2->setFrameShape(QFrame::NoFrame);
        textEdit_3 = new QTextEdit(page);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(100, 280, 171, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto Medium")});
        font1.setPointSize(12);
        textEdit_3->setFont(font1);
        textEdit_3->setFrameShape(QFrame::NoFrame);
        comboBox_2 = new QComboBox(page);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(100, 330, 91, 41));
        textEdit_4 = new QTextEdit(page);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(310, 280, 171, 41));
        textEdit_4->setFont(font1);
        textEdit_4->setFrameShape(QFrame::NoFrame);
        comboBox_3 = new QComboBox(page);
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(310, 330, 131, 41));
        textEdit_5 = new QTextEdit(page);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(580, 190, 221, 201));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 450, 271, 51));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        radioButton = new QRadioButton(page_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(260, 280, 91, 22));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(PvPmode_pages);

        stackedWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(PvPmode_pages);
    } // setupUi

    void retranslateUi(QWidget *PvPmode_pages)
    {
        PvPmode_pages->setWindowTitle(QCoreApplication::translate("PvPmode_pages", "Form", nullptr));
        textEdit->setHtml(QCoreApplication::translate("PvPmode_pages", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#95ecff;\">Player1 is choosing: </span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PvPmode_pages", "General Knowledge", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PvPmode_pages", "Entertainment: Books", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("PvPmode_pages", "Entertainment: Film", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("PvPmode_pages", "Entertainment: Music", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("PvPmode_pages", "Entertainment: Musical & Theaters", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("PvPmode_pages", "Entertainment: Television", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("PvPmode_pages", "Entertainment: Video Games", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("PvPmode_pages", "Entertainment: Board Games", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("PvPmode_pages", "Science & Nature", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("PvPmode_pages", "Science: Computers", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("PvPmode_pages", "Science: Mathematics", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("PvPmode_pages", "Mythology", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("PvPmode_pages", "Sports", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("PvPmode_pages", "Geography", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("PvPmode_pages", "History", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("PvPmode_pages", "Politics", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("PvPmode_pages", "Art", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("PvPmode_pages", "Celebrities", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("PvPmode_pages", "Animals", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("PvPmode_pages", "Vehicles", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("PvPmode_pages", "Entertainment: Comics", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("PvPmode_pages", "Science: Gadgets", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("PvPmode_pages", "Entertainment: Japanese Anime & Manga", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("PvPmode_pages", "Entertainment: Cartoon & Animations", nullptr));

        comboBox->setCurrentText(QString());
        comboBox->setPlaceholderText(QCoreApplication::translate("PvPmode_pages", "Choose one", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("PvPmode_pages", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Roboto Medium'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt;\">Choose the catagory of this round's questions:</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("PvPmode_pages", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Roboto Medium'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Difficulty of questions: </p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("PvPmode_pages", "Easy", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("PvPmode_pages", "Medium", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("PvPmode_pages", "Hard", nullptr));

        textEdit_4->setHtml(QCoreApplication::translate("PvPmode_pages", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Roboto Medium'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:700;\">Type Of questions:</span></p></body></html>", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("PvPmode_pages", "Multiple Choice", nullptr));

        textEdit_5->setHtml(QCoreApplication::translate("PvPmode_pages", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">My name is Mohammad Ehsan Nafari, a senior UI/UX designer with extensive experience in various projects and companies. I was born in 2005 and I am currently studying at the University of Tehran. I am also a certified project manager with certifications from PMI and LinkedIn.</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("PvPmode_pages", "Start Round", nullptr));
        radioButton->setText(QCoreApplication::translate("PvPmode_pages", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PvPmode_pages: public Ui_PvPmode_pages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVPMODE_PAGES_H
