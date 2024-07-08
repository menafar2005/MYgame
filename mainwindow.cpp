#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager();
    getCategory();
    category = 9;
    diff = "easy";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getQuestion()
{
    QString url = "https://opentdb.com/api.php?amount=5&category="+ QString::number(category) +"&difficulty=" + diff +"&type=multiple";
    request = new QNetworkRequest(url);
    reply = manager->get(*request);

    reply->connect(reply,  &QNetworkReply::finished, this, &MainWindow::setQuesiton);

}

void MainWindow::setQuesiton()
{
    correct = QVector<QString> {};
    QString result = reply->readAll();
    QJsonDocument json = QJsonDocument::fromJson(result.toUtf8());
        if (json["response_code"].toDouble() == 0){
            QJsonArray questionsJsons = json["results"].toArray();
            QVector<QString> questions;
            QVector<QVector<QString>> response;
            for (int i{}; i < questionsJsons.size(); i++){
                QJsonObject ques = questionsJsons[i].toObject();
                questions.push_back(ques["question"].toString());
                QVector<QString> ans;
                for (int j {}; j < ques["incorrect_answers"].toArray().size(); j++){
                    ans.push_back(ques["incorrect_answers"].toArray()[j].toString());
                }
                ans.push_back(ques["correct_answer"].toString());
                correct.push_back(ques["correct_answer"].toString());
                //std::random_shuffle(ans.begin(), ans.end(), ans);
                response.push_back(ans);
            }
            ui->question->setText(questions[0]);
            ui->question_2->setText(questions[1]);
            ui->question_3->setText(questions[2]);
            ui->question_4->setText(questions[3]);
            ui->question_5->setText(questions[4]);

            ui->r1->setText(response[0][0]);
            ui->r2->setText(response[0][1]);
            ui->r3->setText(response[0][2]);
            ui->r4->setText(response[0][3]);

            ui->r1_5->setText(response[4][0]);
            ui->r2_5->setText(response[4][1]);
            ui->r3_5->setText(response[4][2]);
            ui->r4_5->setText(response[4][3]);

            ui->r1_2->setText(response[1][0]);
            ui->r2_2->setText(response[1][1]);
            ui->r3_2->setText(response[1][2]);
            ui->r4_2->setText(response[1][3]);

            ui->r1_3->setText(response[2][0]);
            ui->r2_3->setText(response[2][1]);
            ui->r3_3->setText(response[2][2]);
            ui->r4_3->setText(response[2][3]);

            ui->r1_4->setText(response[3][0]);
            ui->r2_4->setText(response[3][1]);
            ui->r3_4->setText(response[3][2]);
            ui->r4_4->setText(response[3][3]);


        }
}

void MainWindow::getCategory()
{
    QString url = "https://opentdb.com/api_category.php";
    request = new QNetworkRequest(url);
    reply = manager->get(*request);

    reply->connect(reply,  &QNetworkReply::finished, this, &MainWindow::setCategory);
}

void MainWindow::setCategory()
{
    QString result = reply->readAll();
    QJsonDocument triviaCategories = QJsonDocument::fromJson(result.toUtf8());
    QJsonArray categoriesJson = triviaCategories["trivia_categories"].toArray();
    for (int i{}; i < categoriesJson.size(); i++){
        QJsonObject json = categoriesJson[i].toObject();
        int num = json["id"].toInt();
        QString name = json["name"].toString();
        categories.push_back(QPair<QString, int>(name, num));
    }
    lay = new QGridLayout();
    wid = new QWidget();
    for (int i{}; i < categories.size(); i++) {
        QPushButton* button = new QPushButton(categories[i].first);
        lay->addWidget(button, i, 0);
        int cat = categories[i].second;

        button->connect(button, &QPushButton::clicked, [&, cat] () {
            category = cat;
            handleQuestion();
        });
    }
    wid->setLayout(lay);

    ui->scrollArea->setWidget(wid);
    qDebug() << "ok";
}

void MainWindow::handleQuestion()
{
    getQuestion();
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_2_clicked()
{
    mode = 1;
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()
{
    mode = 2;
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_easy_clicked()
{
    diff = "easy";
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_medium_clicked()
{
    diff = "medium";
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_hard_clicked()
{
    diff = "hard";
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_r1_clicked()
{
    QMessageBox ms;
    if (ui->r1->text() == correct[0]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_r2_clicked()
{
    QMessageBox ms;
    if (ui->r2->text() == correct[0]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_r3_clicked()
{
    QMessageBox ms;
    if (ui->r3->text() == correct[0]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_r4_clicked()
{
    QMessageBox ms;
    if (ui->r4->text() == correct[0]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_r1_2_clicked()
{
    QMessageBox ms;
    if (ui->r1->text() == correct[1]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_r2_2_clicked()
{
    QMessageBox ms;
    if (ui->r2->text() == correct[1]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_r3_2_clicked()
{
    QMessageBox ms;
    if (ui->r3->text() == correct[1]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_r4_2_clicked()
{
    QMessageBox ms;
    if (ui->r4->text() == correct[1]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(5);
}






void MainWindow::on_r1_3_clicked()
{
    QMessageBox ms;
    if (ui->r1->text() == correct[2]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_r2_3_clicked()
{
    QMessageBox ms;
    if (ui->r2->text() == correct[2]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_r3_3_clicked()
{
    QMessageBox ms;
    if (ui->r3->text() == correct[2]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_r4_3_clicked()
{
    QMessageBox ms;
    if (ui->r4->text() == correct[2]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(6);
}







void MainWindow::on_r1_4_clicked()
{
    QMessageBox ms;
    if (ui->r1->text() == correct[3]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_r2_4_clicked()
{
    QMessageBox ms;
    if (ui->r2->text() == correct[3]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(7);
}
void MainWindow::on_r3_4_clicked()
{
    QMessageBox ms;
    if (ui->r3->text() == correct[3]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(7);
}
void MainWindow::on_r4_4_clicked()
{
    QMessageBox ms;
    if (ui->r4->text() == correct[3]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(7);
}












void MainWindow::on_r1_5_clicked()
{
    QMessageBox ms;
    if (ui->r1->text() == correct[4]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_r2_5_clicked()
{
    QMessageBox ms;
    if (ui->r2->text() == correct[4]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_r3_5_clicked()
{
    QMessageBox ms;
    if (ui->r3->text() == correct[4]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_r4_5_clicked()
{
    QMessageBox ms;
    if (ui->r4->text() == correct[4]) {
        ms.setText("correct");
    } else {
        ms.setText("wrong");
    }
    ms.exec();
    ui->stackedWidget->setCurrentIndex(0);
}
