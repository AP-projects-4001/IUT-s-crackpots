#include "addhealth.h"
#include "ui_addhealth.h"

using namespace std;

int Health::idCounter = 1;
int addHealth::flag = 1;
addHealth::addHealth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addHealth)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
}

addHealth::~addHealth()
{
    delete ui;
}

void addHealth::on_buttonBox_accepted()
{
    if (ui->product_lineEdit->text() == "" || ui->price_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Health newProduct;
            newProduct.setData(
                        ui->product_lineEdit->text().toStdString(),
                        ui->price_lineEdit->text().toInt(),
                        ui->number_spin->value(),
                        0,
                        ui->use_lineEdit->text().toStdString(),
                        ui->deprecation_lineEdit->text().toStdString(),
                        ui->about_textEdit->toPlainText().toStdString(),
                        0
            );

            ofstream outDatabase("healthproducts.txt", ios_base::app);
            outDatabase << newProduct.getId() << '\n';
            outDatabase << newProduct.getName() << '\n';
            outDatabase << newProduct.getPrice() << '\n';
            outDatabase << newProduct.getRemainingNum() << '\n';
            outDatabase << newProduct.getBoughtNum() << '\n';
            outDatabase << newProduct.getuse() << '\n';
            outDatabase << newProduct.getdeprecationTime() << '\n';
            outDatabase << newProduct.getabout() << '\n';
            outDatabase << newProduct.getUsId() << '\n';
            outDatabase << "#####\n" << '\n';

            QMessageBox::information(this, "addhealthproduct", "Product added successfully.");

            outDatabase.close();

            healthProducts.push_back(newProduct);

            ui->product_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spin->clear();
            ui->use_lineEdit->clear();
            ui->deprecation_lineEdit->clear();
            ui->about_textEdit->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addHealth::updateVector() {
    Health health;
    string tmp[10];
    int counter{0};
    ifstream inDataBase("/Users/parsakhodadadi/Desktop/data/healthproducts.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            health.setData(tmp[0],stoi(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),tmp[4],tmp[5],tmp[6],stoi(tmp[7]));

            healthProducts.push_back(health);
            counter=0;
        }

        else
            counter++;



    }
}
