#ifndef ADDFURNITURE_H
#define ADDFURNITURE_H

#include <QDialog>

namespace Ui {
class addFurniture;
}

class addFurniture : public QDialog
{
    Q_OBJECT

public:
    explicit addFurniture(QWidget *parent = nullptr);
    ~addFurniture();

private:
    Ui::addFurniture *ui;
};

#endif // ADDFURNITURE_H
