#include "addtoy.h"
#include "ui_addtoy.h"

using namespace::std;

int Toy::idCounter = 1;
int addToy::flag = 1;
addToy::addToy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addToy)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
}

addToy::~addToy()
{
    delete ui;
}

void addToy::on_buttonBox_accepted()
{
    if (ui->toy_lineEdit->text() == "" || ui->price_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Toy newToy;
            newToy.setData(
                        ui->toy_lineEdit->text().toStdString(),
                        ui->price_lineEdit->text().toInt(),
                        ui->number_spinBox->value(),
                        0,
                        ui->type_comboBox->currentText().toStdString(),
                        ui->use_lineEdit->text().toStdString(),
                        ui->about_textEdit->toPlainText().toStdString(),
                        id
            );

            ofstream outDatabase("toys.txt", ios_base::app);
            outDatabase << newToy.getId() << '\n';
            outDatabase << newToy.getName() << '\n';
            outDatabase << newToy.getPrice() << '\n';
            outDatabase << newToy.getRemainingNum() << '\n';
            outDatabase << newToy.getBoughtNum() << '\n';
            outDatabase << newToy.gettype() << '\n';
            outDatabase << newToy.getuse()<< '\n';
            outDatabase << newToy.getabout() << '\n';
            outDatabase << newToy.getUsId() << '\n';
            outDatabase << "#####\n";

            QMessageBox::information(this, "addtoy", "Toy added successfully.");

            outDatabase.close();

            toys.push_back(newToy);

            ui->toy_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->type_comboBox->clear();
            ui->use_lineEdit->clear();
            ui->about_textEdit->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addToy::updateVector() {
    Toy toy;
    string tmp[10];
    int counter{0};
    ifstream inDataBase("toys.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            toy.setData(tmp[0],stoi(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),tmp[4],tmp[5],tmp[6],stoi(tmp[7]));

            toys.push_back(toy);
            counter=0;
        }

        else
            counter++;



    }
}
void addToy::setId(int i)
{
    id=i;
}

