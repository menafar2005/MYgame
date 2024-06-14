#ifndef PVPMODE_PAGES_H
#define PVPMODE_PAGES_H

#include <QWidget>

namespace Ui {
class PvPmode_pages;
}

class PvPmode_pages : public QWidget
{
    Q_OBJECT

public:
    explicit PvPmode_pages(QWidget *parent = nullptr);
    ~PvPmode_pages();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PvPmode_pages *ui;
};

#endif // PVPMODE_PAGES_H
