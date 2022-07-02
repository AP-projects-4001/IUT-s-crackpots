#include "userprofile.h"
#include "string"
UserProfile::UserProfile()
{

}

<<<<<<< HEAD

void UserProfile::setData(string u,string p,string fn,string ln,string e,string a,string r,string m)

=======
void UserProfile::setData(string fn,string ln,string u,string p,string e,string a,string r)
>>>>>>> parsa
{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
<<<<<<< HEAD
    money=m;
=======
    idCounter++;
>>>>>>> parsa
    id=idCounter;
    idCounter++;

}

void UserProfile::setDataSpecial(string u, string p, string fn, string ln, string e, string a, string r,string m,int i)
{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
    id=i;
    money=m;

}


int UserProfile::getId()
{
    return id;
}

string UserProfile::getUsername()
{
    return username;
}


string UserProfile::getPassword()
{
    return password;
}

string UserProfile::getFname()
{
    return fName;
}

string UserProfile::getLname()
{
    return lName;
}

string UserProfile::getEmali()
{
    return email;
}

string UserProfile::getAdrress()
{
    return address;
}

string UserProfile::getRole()
{
    return role;
}

string UserProfile::getMoney()
{
    return money;
}


