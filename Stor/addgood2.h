#ifndef ADDGOOD2_H
#define ADDGOOD2_H

#include <QDialog>

namespace Ui {
class addGood2;
}

class addGood2 : public QDialog
{
    Q_OBJECT

public:
    explicit addGood2(QWidget *parent = nullptr);
    ~addGood2();

private:
    Ui::addGood2 *ui;
};

#endif // ADDGOOD2_H
