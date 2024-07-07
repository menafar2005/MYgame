#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->pvpButton, &QPushButton::clicked, this, &MainWindow::startPvP);
    connect(ui->survivalButton, &QPushButton::clicked, this, &MainWindow::startSurvival);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::startPvP() {
    game = new Game(Game::PvP, this);
    game->start();
}

void MainWindow::startSurvival() {
    game = new Game(Game::Survival, this);
    game->start();
}
