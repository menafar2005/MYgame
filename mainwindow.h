#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QApplication>
#include <QGridLayout>
#include <QString>
#include <QByteArray>
#include <algorithm>
#include <QStandardItemModel>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_easy_clicked();

    void on_medium_clicked();

    void on_hard_clicked();

    void on_r1_clicked();
    void on_r2_clicked();
    void on_r3_clicked();
    void on_r4_clicked();




    void on_r1_2_clicked();
    void on_r2_2_clicked();
    void on_r3_2_clicked();
    void on_r4_2_clicked();

    void on_r1_3_clicked();
    void on_r2_3_clicked();
    void on_r3_3_clicked();
    void on_r4_3_clicked();


    void on_r1_4_clicked();
    void on_r2_4_clicked();
    void on_r3_4_clicked();
    void on_r4_4_clicked();


    void on_r1_5_clicked();
    void on_r2_5_clicked();
    void on_r3_5_clicked();
    void on_r4_5_clicked();



private:
    Ui::MainWindow *ui;
    void getQuestion();
    void setQuesiton();
    void getCategory();
    void setCategory();
    void handleQuestion();
    QNetworkRequest* request;
    QVector<QPair<QString, int>> categories;
    QGridLayout* lay;
    QWidget* wid;
    QVector<QString> correct;
    QNetworkAccessManager* manager;
    QNetworkReply* reply;
    int mode{};
    int category;
    QString diff;
};
#endif // MAINWINDOW_H
