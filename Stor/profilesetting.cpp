#include "profilesetting.h"
#include "ui_profilesetting.h"
#include "fstream"

using namespace std;

profileSetting::profileSetting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profileSetting)
{
    connect(parent,SIGNAL(sendUserInformation(QString ,QString ,QString ,QString ,QString ,QString ,QString,int )),this,SLOT(setInformation(QString ,QString ,QString ,QString ,QString ,QString ,QString ,int )));
    ui->setupUi(this);

    for (int i=0;i<22;i++)
    {
        ui->comboBox->addItem(QString::fromStdString(cities[i]));
    }
}

profileSetting::~profileSetting()
{
    delete ui;
}


void profileSetting::setInformation(QString us, QString ps, QString fn, QString ln,QString c, QString e, QString a, int id)
{
    ui->IdLabel->setText(QString::number(id));
    ui->usernameLineEdit->setText(us);
    ui->firstNameLineEdit->setText(fn);
    ui->lastNameLineEdit->setText(ln);
    ui->emailLineEdit->setText(e);
    ui->addressLineEdit->setText(a);
    ui->comboBox->setCurrentText(c);
    this->ps=ps.toStdString();
}

void profileSetting::on_saveBtn_clicked()
{

    ifstream indataBase("D:\\Alireza\\coDataBase.txt");

    string tmp;
    string info="";
    if(ui->newPasswordLineEdit->text()=="")
    {
    while(getline(indataBase,tmp))
    {
            if(tmp==ui->usernameLineEdit->text().toStdString())
            {

                info+=tmp+'\n';
                getline(indataBase,tmp);
                info+=ps+'\n';
                getline(indataBase,tmp);
                info+=ui->firstNameLineEdit->text().toStdString()+'\n';
                getline(indataBase,tmp);
                info+=ui->lastNameLineEdit->text().toStdString()+'\n';
                getline(indataBase,tmp);
                info+=ui->comboBox->currentText().toStdString()+'\n';
                getline(indataBase,tmp);
                info+=ui->emailLineEdit->text().toStdString()+'\n';
                getline(indataBase,tmp);
                info+=ui->addressLineEdit->text().toStdString()+'\n';




            }
            else
            {
                info+=tmp+'\n';
            }
        }
    }
    ofstream outDataBase("D:\\Alireza\\coDataBase.txt");
    outDataBase<<info;
    indataBase.close();
    outDataBase.close();




}

