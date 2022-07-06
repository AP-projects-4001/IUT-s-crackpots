#include "addlaptop.h"
#include "ui_addlaptop.h"

using namespace::std;

int Laptop::idCounter = 1;
int addLaptop::flag = 1;
addLaptop::addLaptop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addLaptop)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
}

addLaptop::~addLaptop()
{
    delete ui;
}

void addLaptop::on_buttonBox_accepted()
{
    if (ui->laptop_lineEdit->text() == "" || ui->price_lineEdit->text() == "" || ui->process_lineEdit->text() == ""
            || ui->memory_lineEdit->text() == "" || ui->graphic_lineEdit->text() == "" ||
            ui->screen_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Laptop newLaptop;
            newLaptop.setData(
                        ui->laptop_lineEdit->text().toStdString(),
                        ui->price_lineEdit->text().toInt(),
                        ui->number_spinBox->value(),
                        0 ,
                        ui->process_lineEdit->text().toStdString(),
                        ui->limit_comboBox->currentText().toInt(),
                        ui->memory_lineEdit->text().toStdString(),
                        ui->graphic_lineEdit->text().toStdString(),
                        ui->screen_lineEdit->text().toInt(),
                        ui->about_textEdit->toPlainText().toStdString(),
                        0
            );

            ofstream outDatabase("laptops.txt", ios_base::app);
            outDatabase << newLaptop.getId() << '\n';
            outDatabase << newLaptop.getName() << '\n';
            outDatabase << newLaptop.getPrice() << '\n';
            outDatabase << newLaptop.getRemainingNum() << '\n';
            outDatabase << newLaptop.getBoughtNum() << '\n';
            outDatabase << newLaptop.getprocessorSeries() << '\n';
            outDatabase << newLaptop.getlimitRAM() << '\n';
            outDatabase << newLaptop.getmemoryType() << '\n';
            outDatabase << newLaptop.getgraphicConstructor() << '\n';
            outDatabase << newLaptop.getscreenSize() << '\n';
            outDatabase << newLaptop.getabout() << '\n';
            outDatabase << newLaptop.getUsId() << '\n';
            outDatabase << "#####\n";

            QMessageBox::information(this, "addlaptop", "Laptop added successfully.");

            outDatabase.close();

            laptops.push_back(newLaptop);

            ui->laptop_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->process_lineEdit->clear();
            ui->limit_comboBox->clear();
            ui->memory_lineEdit->clear();
            ui->graphic_lineEdit->clear();
            ui->screen_lineEdit->clear();
            ui->about_textEdit->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addLaptop::updateVector() {
    Laptop laptop;
    string tmp[12];
    int counter{0};
    ifstream inDataBase("laptops.txt", ios::in);
    while(getline(inDataBase, tmp[counter]))
    {

        if(tmp[counter]=="#####") {
            laptop.setData(tmp[0],stoi(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),tmp[4], stoi(tmp[5]),tmp[6],tmp[7], stoi(tmp[8]),
                                tmp[9], stoi(tmp[10]));
            laptops.push_back(laptop);
            counter=0;
        } else {
            counter += 1;
        }



    }
}

