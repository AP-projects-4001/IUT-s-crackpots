#ifndef ADDTOY_H
#define ADDTOY_H

#include "toy.h"
#include "QMessageBox"
#include "fstream"
#include <vector>
#include <QDialog>

namespace Ui {
class addToy;
}

class addToy : public QDialog
{
    Q_OBJECT

public:
    explicit addToy(QWidget *parent = nullptr);
    ~addToy();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

    void setId(int i);

private:
    Ui::addToy *ui;
    std::vector<Toy> toys;
    static int flag;
    int id;
};

#endif // ADDTOY_H
