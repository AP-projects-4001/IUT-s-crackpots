#ifndef ADDMOBILE_H
#define ADDMOBILE_H

#include "mobile.h"
#include "QMessageBox"
#include "fstream"
#include <vector>
#include <QDialog>

namespace Ui {
class addMobile;
}

class addMobile : public QDialog
{
    Q_OBJECT

public:
    explicit addMobile(QWidget *parent = nullptr);
    ~addMobile();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

private:
    Ui::addMobile *ui;
    std::vector<Mobile> mobiles;
    static int flag;
};

#endif // ADDMOBILE_H
