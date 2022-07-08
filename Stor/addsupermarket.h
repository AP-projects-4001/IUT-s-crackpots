#ifndef ADDSUPERMARKET_H
#define ADDSUPERMARKET_H

#include "supermarket.h"
#include "QMessageBox"
#include "fstream"
#include <vector>
#include <QDialog>

namespace Ui {
class addSupermarket;
}

class addSupermarket : public QDialog
{
    Q_OBJECT

public:
    explicit addSupermarket(QWidget *parent = nullptr);
    ~addSupermarket();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

    void setId(int i);

private:
    Ui::addSupermarket *ui;
    std::vector<Supermarket> supers;
    static int flag;
    int id;
};

#endif // ADDSUPERMARKET_H
