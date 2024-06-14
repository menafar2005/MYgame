#include "pvpmode_pages.h"
#include "ui_pvpmode_pages.h"

PvPmode_pages::PvPmode_pages(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PvPmode_pages)
{
    ui->setupUi(this);
}

PvPmode_pages::~PvPmode_pages()
{
    delete ui;
}

void PvPmode_pages::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

