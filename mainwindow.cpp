#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pvpmode_pages.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pvpmode_button_clicked()
{
    PvPmode_pages *dialog = new PvPmode_pages();
    dialog->show();
}


void MainWindow::on_pushButton_clicked()
{
    PvPmode_pages *dialog = new PvPmode_pages();
    dialog->show();
}

