#ifndef COSTUMERPAGE_H
#define COSTUMERPAGE_H
#include "profilesetting.h"
#include "userprofile.h"
#include <QMainWindow>

namespace Ui {
class costumerPage;
}

class costumerPage : public QMainWindow , public UserProfile
{
    Q_OBJECT


signals:

    void sendUserInformation(QString us,QString ps,QString fn,QString ln,QString g,QString c,QString e,QString a,int id);

private slots:

    void setInformation(QString us,QString m,QString g,int i);


    void on_profileBtn_clicked();

    void on_addMoney_clicked();


    void on_storeBtn_clicked();

    void on_logoutBtn_clicked();

public:
    explicit costumerPage(QWidget *parent = nullptr);
    ~costumerPage();

private:
    Ui::costumerPage *ui;
    profileSetting * profile;
};

#endif // COSTUMERPAGE_H
