#ifndef ADDHEALTH_H
#define ADDHEALTH_H

#include "health.h"
#include "QMessageBox"
#include "fstream"
#include <vector>
#include <QDialog>

namespace Ui {
class addHealth;
}

class addHealth : public QDialog
{
    Q_OBJECT

public:
    explicit addHealth(QWidget *parent = nullptr);
    ~addHealth();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

private:
    Ui::addHealth *ui;
    std::vector<Health> healthProducts;
    static int flag;
};

#endif // ADDHEALTH_H
