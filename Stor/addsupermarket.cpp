#include "addsupermarket.h"
#include "ui_addsupermarket.h"

using namespace::std;

int Supermarket::idCounter = 1;
int addSupermarket::flag = 1;
addSupermarket::addSupermarket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSupermarket)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
}

addSupermarket::~addSupermarket()
{
    delete ui;

}

void addSupermarket::on_buttonBox_accepted()
{
    if (ui->good_lineEdit->text() == "" || ui->price_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Supermarket newSuper;
            newSuper.setData(
                        ui->good_lineEdit->text().toStdString(),
                        ui->price_lineEdit->text().toInt(),
                        ui->number_spinBox->value(),
                        0,
                        ui->use_lineEdit->text().toStdString(),
                        ui->about_textEdit->toPlainText().toStdString(),
                        0
            );

            ofstream outDatabase("supermarket.txt", ios_base::app);
            outDatabase << newSuper.getId() << '\n';
            outDatabase << newSuper.getName() << '\n';
            outDatabase << newSuper.getPrice()<< '\n';
            outDatabase << newSuper.getRemainingNum() << '\n';
            outDatabase << newSuper.getBoughtNum() << '\n';
            outDatabase << newSuper.getuse() << '\n';
            outDatabase << newSuper.getabout() << '\n';
            outDatabase << newSuper.getUsId() << '\n';
            outDatabase << "#####\n";

            QMessageBox::information(this, "addgood", "Good added successfully.");

            outDatabase.close();

            supers.push_back(newSuper);

            ui->good_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->use_lineEdit->clear();
            ui->about_textEdit->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addSupermarket::updateVector() {
    Supermarket super;
    string tmp[8];
    int counter = 0;
    ifstream inDataBase("supermarket.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            super.setData(tmp[1],stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],stoi(tmp[7]));

            supers.push_back(super);
            counter=0;
        }

        else
            counter++;

    }
}

