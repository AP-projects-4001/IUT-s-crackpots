#ifndef ADDCLOTH_H
#define ADDCLOTH_H

#include "QMessageBox"
#include "fstream"
#include <QDialog>
#include "cloth.h"

namespace Ui {
class addCloth;
}

class addCloth : public QDialog
{
    Q_OBJECT

public:
    explicit addCloth(QWidget *parent = nullptr);
    ~addCloth();

private slots:
    void on_buttonBox_accepted();

    void updateVector();

private:
    Ui::addCloth *ui;
    std::vector<Cloth> clothes;
    static int flag;
};

#endif // ADDCLOTH_H
