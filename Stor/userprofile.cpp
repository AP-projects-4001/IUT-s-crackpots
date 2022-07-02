#include "userprofile.h"
#include "string"
UserProfile::UserProfile()
{

}


void UserProfile::setData(string u,string p,string fn,string ln,string e,string a,string r,string m)

{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
    money=m;
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


