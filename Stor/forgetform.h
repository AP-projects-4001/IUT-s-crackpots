#ifndef FORGETFORM_H
#define FORGETFORM_H
#include "userprofile.h"
#include "vector"
#include <QDialog>

namespace Ui {
class forgetForm;
}

class forgetForm : public QDialog
{
    Q_OBJECT

public:
    explicit forgetForm(QWidget *parent = nullptr);
    ~forgetForm();

private slots:
    void on_findBtn_clicked();
    void update_vector();

private:
    Ui::forgetForm *ui;
    vector<UserProfile> up;
};

#endif // FORGETFORM_H
