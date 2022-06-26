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

    static int idCounter;
    int id;

public:
    UserProfile();

    void setData(string fn,string ln,string u,string p,string e,string a);
    int getId();
    string getUsername();

};

#endif // USERPROFILE_H
