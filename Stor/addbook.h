#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>
#include "book.h"
#include "vector"
#include "QMessageBox"

namespace Ui {
class addBook;
}

class addBook : public QDialog
{
    Q_OBJECT

public:
    explicit addBook(QWidget *parent = nullptr);
    ~addBook();



private slots:
    void on_buttonBox_accepted();

    void updateVector();

private:
    Ui::addBook *ui;
    std::vector<Book> books;
    static int flag;
};

#endif // ADDBOOK_H
