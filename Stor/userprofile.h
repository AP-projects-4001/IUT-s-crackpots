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
    string city;
    string gender;
    static int idCounter;
    int id;
    string cities[22]={"Ardebil","Bandar Abas","Birjand","Bojnoord","Esfhan","Gilan","Karaj","Kerman","Kermanshah","Khozestan","Mashhad","Mazandaran","Orumie","Qazvin","Qome","Semnan","ShahrKourd","Shiraz","Sistan va Balouchestan","Tabriz","Tehran","Yazd",};

public:
    UserProfile();

    void setData(string u,string p,string fn,string ln,string g,string c,string e,string a,string r,string money);
    void setDataSpecial(string u,string p,string fn,string ln,string g,string c,string e,string a,string r,string m, int i);
    int getId();
    string getUsername();
    string getPassword();
    string getFname();
    string getLname();
    string getEmali();
    string getAdrress();
    string getRole();
    string getMoney();
    string getCity();
    string getGender();

};

#endif // USERPROFILE_H
