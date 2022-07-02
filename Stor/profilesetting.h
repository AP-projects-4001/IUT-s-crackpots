#ifndef PROFILESETTING_H
#define PROFILESETTING_H

#include <QMainWindow>

namespace Ui {
class profileSetting;
}

class profileSetting : public QMainWindow
{
    Q_OBJECT



private slots:

    void setInformation(QString us,QString ps,QString fn,QString ln,QString e,QString a, int id);

    void on_saveBtn_clicked();

public:
    explicit profileSetting(QWidget *parent = nullptr);
    ~profileSetting();

private:
    Ui::profileSetting *ui;
    std::string ps;
};

#endif // PROFILESETTING_H
