#ifndef ADDGOOD_H
#define ADDGOOD_H

#include <QDialog>

namespace Ui {
class addGood;
}

class addGood : public QDialog
{
    Q_OBJECT

public:
    explicit addGood(QWidget *parent = nullptr);
    ~addGood();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::addGood *ui;
};

#endif // ADDGOOD_H
