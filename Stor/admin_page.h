#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H
#include "userprofile.h"
#include "QListWidgetItem"
#include <QDialog>
#include "profilesetting.h"
namespace Ui {
class Admin_Page;
}

class Admin_Page : public QDialog
{
    Q_OBJECT

signals:
    void sendUserInformation(QString us,QString ps,QString fn,QString ln,QString g,QString c,QString e,QString a,int id);

private slots:
    void update_vector();


    void on_refreshBtn_clicked();

    void update_list();

    void on_showBtn_clicked();


    void on_removeBtn_clicked();

    void on_changeBtn_clicked();

    void on_pushButton_clicked();

public:
    explicit Admin_Page(QWidget *parent = nullptr);
    ~Admin_Page();

private:
    Ui::Admin_Page *ui;
    vector<UserProfile> up;
    QListWidgetItem *cust;
    QListWidgetItem *clie;
    profileSetting * profile;
    static int flag;
};

#endif // ADMIN_PAGE_H
