#include "addfurniture.h"
#include "ui_addfurniture.h"

using namespace::std;

int Furniture::idCounter = 1;
int addFurniture::flag = 1;
addFurniture::addFurniture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addFurniture)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }

}

addFurniture::~addFurniture()
{
    delete ui;
}



void addFurniture::on_buttonBox_accepted()
{
    if (ui->furniture_lineEdit->text() == "" || ui->price_lineEdit->text() == "" || ui->use_lineEdit->text() == ""
            || ui->about_textEdit->toPlainText() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Furniture newFurniture;
            newFurniture.setData(ui->furniture_lineEdit->text().toStdString(), ui->price_lineEdit->text().toInt(), ui->number_spinBox->value()
                                 , 0, ui->garantee_lineEdit->text().toStdString(), ui->use_lineEdit->text().toStdString(), ui->about_textEdit->toPlainText().toStdString(), 0);

            ofstream outDatabase("/Users/parsakhodadadi/Desktop/data/furnitures.txt", ios_base::app);
            outDatabase << newFurniture.getId() << '\n';
            outDatabase << newFurniture.getName() << '\n';
            outDatabase << newFurniture.getPrice() << '\n';
            outDatabase << newFurniture.getRemainingNum() << '\n';
            outDatabase << newFurniture.getBoughtNum() << '\n';
            outDatabase << newFurniture.getgarantee() << '\n';
            outDatabase << newFurniture.getuse() << '\n';
            outDatabase << newFurniture.getabout() << '\n';
            outDatabase << newFurniture.getUsId() << '\n';
            outDatabase << "#####\n";

            QMessageBox::information(this, "addfurniture", "Furniture added successfully.");

            outDatabase.close();

            furnitures.push_back(newFurniture);

            ui->furniture_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->garantee_lineEdit->clear();
            ui->use_lineEdit->clear();
            ui->about_textEdit->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addFurniture::updateVector() {
    Furniture furniture;
    string tmp[9];
    int counter = 0;
    ifstream inDataBase("/Users/parsakhodadadi/Desktop/data/furnitures.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            furniture.setData(tmp[1],stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],tmp[7],stoi(tmp[8]));

            furnitures.push_back(furniture);
            counter=0;
        }

        else
            counter++;



    }
}


