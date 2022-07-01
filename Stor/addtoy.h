#ifndef ADDTOY_H
#define ADDTOY_H

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

private:
    Ui::addToy *ui;
};

#endif // ADDTOY_H
