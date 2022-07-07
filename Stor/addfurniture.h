#ifndef ADDFURNITURE_H
#define ADDFURNITURE_H
#include "furniture.h"
#include "QMessageBox"
#include "fstream"
#include <vector>
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

private slots:
    void on_buttonBox_accepted();

    void updateVector();

private:
    Ui::addFurniture *ui;
    std::vector<Furniture> furnitures;
    static int flag;
};

#endif // ADDFURNITURE_H
