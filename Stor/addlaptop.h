#ifndef ADDLAPTOP_H
#define ADDLAPTOP_H

#include "laptop.h"
#include "QMessageBox"
#include "fstream"
#include <vector>
#include <QDialog>

namespace Ui {
class addLaptop;
}

class addLaptop : public QDialog
{
    Q_OBJECT

public:
    explicit addLaptop(QWidget *parent = nullptr);
    ~addLaptop();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

private:
    Ui::addLaptop *ui;
    std::vector<Laptop> laptops;
    static int flag;
};

#endif // ADDLAPTOP_H
