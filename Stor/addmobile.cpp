#include "addmobile.h"
#include "ui_addmobile.h"

using namespace::std;

int Mobile::idCounter = 1;
int addMobile::flag = 1;
addMobile::addMobile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMobile)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
}

addMobile::~addMobile()
{
    delete ui;
}

void addMobile::on_buttonBox_accepted()
{
    if (ui->mobile_lineEdit->text() == "" || ui->price_lineEdit->text() == "" || ui->screenTech_lineEdit->text() == ""
            || ui->networks_lineEdit->text() == "" || ui->rezoloution_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Mobile newMobile;
            newMobile.setData(
                        id,
                        ui->mobile_lineEdit->text().toStdString(),
                        ui->price_lineEdit->text().toInt(),
                        ui->number_spinBox->value(),
                        0,
                        ui->memory_comboBox->currentText().toInt(),
                        ui->screenTech_lineEdit->text().toStdString(),
                        ui->networks_lineEdit->text().toStdString(),
                        ui->rezoloution_lineEdit->text().toInt(),
                        ui->operating_comboBox->currentText().toStdString()

            );

            ofstream outDatabase("mobiles.txt", ios_base::app);
            outDatabase << newMobile.getUsId() << '\n';
            outDatabase << newMobile.getName() << '\n';
            outDatabase << newMobile.getPrice() << '\n';
            outDatabase << newMobile.getRemainingNum() << '\n';
            outDatabase << newMobile.getBoughtNum() << '\n';
            outDatabase << newMobile.getmemoryGB() << '\n';
            outDatabase << newMobile.getscreenTech() << '\n';
            outDatabase << newMobile.getnetworks() << '\n';
            outDatabase << newMobile.getrezoloutionMPx() << '\n';
            outDatabase << newMobile.getoperatingSystem() << '\n';
            outDatabase << newMobile.getId() << '\n';

            outDatabase << "#####\n";

            QMessageBox::information(this, "addmobile", "Mobile added successfully.");

            outDatabase.close();

            mobiles.push_back(newMobile);

            ui->mobile_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->memory_comboBox->clear();
            ui->screenTech_lineEdit->clear();
            ui->networks_lineEdit->clear();
            ui->rezoloution_lineEdit->clear();
            ui->operating_comboBox->clear();

            close();

        } catch(...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addMobile::updateVector() {
    Mobile mobile;
    string tmp[10];
    int counter{0};
    ifstream inDataBase("mobiles.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {
            mobile.setData(stoi(tmp[0]),tmp[1],stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),stoi(tmp[5]),tmp[6],tmp[7],stoi(tmp[8]),
                    tmp[9]);

            mobiles.push_back(mobile);
            counter=0;
        }

        else
            counter++;

    }
}

void addMobile::setId(int i)
{
    id=i;
}

