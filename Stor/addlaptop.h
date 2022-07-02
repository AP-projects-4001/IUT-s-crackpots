#ifndef ADDLAPTOP_H
#define ADDLAPTOP_H

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

private:
    Ui::addLaptop *ui;
};

#endif // ADDLAPTOP_H
