#ifndef USERPROFILE_H
#define USERPROFILE_H
#include <iostream>
using namespace std;
class UserProfile
{
protected:

    string fName;
    string lName;
    string username;
    string password;
    string email;
    string address;
    string role;
    string money;

    static int idCounter;
    int id;

public:
    UserProfile();

    void setData(string u,string p,string fn,string ln,string e,string a,string r,string money);
    void setDataSpecial(string u,string p,string fn,string ln,string e,string a,string r,string m, int i);
    int getId();
    string getUsername();
    string getPassword();
    string getFname();
    string getLname();
    string getEmali();
    string getAdrress();
    string getRole();
    string getMoney();

};

#endif // USERPROFILE_H
