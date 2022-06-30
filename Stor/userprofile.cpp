#include "userprofile.h"

UserProfile::UserProfile()
{

}


void UserProfile::setData(string u,string p,string fn,string ln,string e,string a,string r)

{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
    id=idCounter;
    idCounter++;

}

void UserProfile::setDataSpecial(string u, string p, string fn, string ln, string e, string a, string r,int i)
{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
    id=i;
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

string UserProfile::getRole()
{
    return role;
}
