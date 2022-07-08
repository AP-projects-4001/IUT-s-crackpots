#include "addcloth.h"
#include "ui_addcloth.h"

using namespace std;

int Cloth::idCounter = 1;
int addCloth::flag = 1;
addCloth::addCloth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCloth)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }
    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));
}

addCloth::~addCloth()
{
    delete ui;
}



void addCloth::on_buttonBox_accepted()
{
    if (ui->cloth_lineEdit->text() == "" || ui->price_lineEdit->text() == ""
            || ui->tarh_lineEdit->text() == "" || ui->uses_textEdit->toPlainText() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Cloth newCloth;
            newCloth.setData(ui->cloth_lineEdit->text().toStdString(), ui->price_lineEdit->text().toInt(),
                             ui->number_spinBox->value(), 0, ui->collar_comboBox->currentText().toStdString(), ui->sleeves_comboBox->currentText().toStdString(),
                             ui->uses_textEdit->toPlainText().toStdString(), ui->tarh_lineEdit->text().toStdString(), id);
            ofstream outDatabase("clothes.txt", ios_base::app);
            outDatabase << newCloth.getId() << '\n';
            outDatabase << newCloth.getName() << '\n';
            outDatabase << newCloth.getPrice() << '\n';
            outDatabase << newCloth.getRemainingNum() << '\n';
            outDatabase << newCloth.getBoughtNum() << '\n';
            outDatabase << newCloth.getcollar() << '\n';
            outDatabase << newCloth.getsleeves() << '\n';
            outDatabase << newCloth.gettarh() << '\n';
            outDatabase << newCloth.getuses() << '\n';
            outDatabase << newCloth.getUsId() << '\n';
            outDatabase << "#####\n";

            QMessageBox::information(this, "addcloth", "Cloth added successfully.");

            outDatabase.close();

            clothes.push_back(newCloth);

            ui->cloth_lineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->collar_comboBox->clear();
            ui->sleeves_comboBox->clear();
            ui->tarh_lineEdit->clear();
            ui->uses_textEdit->clear();

            close();

        } catch (...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addCloth::updateVector() {
    Cloth cloth;
    string tmp[10];
    int counter{0};
    ifstream inDataBase("clothes.txt",ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            cloth.setData(tmp[0],stoi(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),tmp[4],tmp[5],tmp[6],tmp[7],stoi(tmp[8]));

            clothes.push_back(cloth);
            counter=0;
        }

        else
            counter++;



    }
}

void addCloth::setId(int i)
{
    id=i;
}

