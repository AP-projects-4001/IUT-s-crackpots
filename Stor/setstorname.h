#ifndef SETSTORNAME_H
#define SETSTORNAME_H

#include <QDialog>

namespace Ui {
class setStorName;
}

class setStorName : public QDialog
{
    Q_OBJECT
signals:
    void sendName(QString n);

public:
    explicit setStorName(QWidget *parent = nullptr);
    ~setStorName();

private slots:
    void on_saveBtn_clicked();
    void setUSername(QString us);

private:
    Ui::setStorName *ui;
    QString username;
};

#endif // SETSTORNAME_H
