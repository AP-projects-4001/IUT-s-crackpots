#include "addbook.h"
#include "book.h"
#include "good.h"
#include "ui_addbook.h"
#include "QMessageBox"
#include "fstream"
#include <vector>


using namespace std;

int Book::idCounter = 1;
int addBook::flag = 1;
addBook::addBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBook)
{
    ui->setupUi(this);

    if(flag==1)
    {
        updateVector();
        flag--;
    }

    connect(parent,SIGNAL(sendId(int)),this,SLOT(setId(int)));

}

addBook::~addBook()
{
    delete ui;
}

void addBook::on_buttonBox_accepted()
{

    if (ui->namelineEdit->text() == "" || ui->price_lineEdit->text() == "" ||  ui->lang_lineEdit->text() == "") {
        QMessageBox::critical(this, "Information", "Fill in the blank");
    } else {
        try {
            Book newBook;

            newBook.setData(id ,ui->namelineEdit->text().toStdString(), ui->price_lineEdit->text().toInt(), ui->number_spinBox->value(), 0,
                            ui->series_comboBox->currentText().toStdString(), ui->jeld_comboBox->currentText().toStdString(), ui->awards_textEdit->toPlainText().toStdString()
                               , ui->lang_lineEdit->text().toStdString());

            ofstream outDatabase("book.txt", ios_base::app);
            outDatabase << newBook.getUsId() << '\n';
            outDatabase << newBook.getName() << '\n';
            outDatabase << newBook.getPrice() << '\n';
            outDatabase << newBook.getRemainingNum() << '\n';
            outDatabase << newBook.getBoughtNum() << '\n';
            outDatabase << newBook.getseriesType() << '\n';
            outDatabase << newBook.getjeldType() << '\n';
            outDatabase << newBook.getawards() << '\n';
            outDatabase << newBook.getlanguage() << '\n';
            outDatabase << newBook.getId() << '\n';
            outDatabase << "#####\n";

            QMessageBox::information(this, "addbook", "book added successfully.");

            outDatabase.close();

            books.push_back(newBook);

            ui->namelineEdit->clear();
            ui->price_lineEdit->clear();
            ui->number_spinBox->clear();
            ui->series_comboBox->clear();
            ui->jeld_comboBox->clear();
            ui->lang_lineEdit->clear();
            ui->awards_textEdit->clear();

            close();

        } catch (...) {
            QMessageBox::critical(this,"Error","error");
        }
    }
}

void addBook::updateVector() {
    Book book;
    string tmp[11];
    int counter{0};
    ifstream inDataBase("books.txt", ios_base::in);
    while(getline(inDataBase,tmp[counter]))
    {

        if(tmp[counter]=="#####")
        {

            book.setData(stoi(tmp[0]),(tmp[1]),stoi(tmp[2]),stoi(tmp[3]),stoi(tmp[4]),tmp[5],tmp[6],tmp[7],tmp[8]);

            books.push_back(book);
            counter=0;
        }

        else
            counter++;

    }
}

void addBook::setId(int i)
{
    id=i;
}
