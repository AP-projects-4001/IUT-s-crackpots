#include "userprofile.h"

UserProfile::UserProfile()
{

}

void UserProfile::setData(string fn,string ln,string u,string p,string e,string a,string r)
{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
    idCounter++;
    id=idCounter;

}

int UserProfile::getId()
{
    return id;
}

string UserProfile::getUsername()
{
    return username;
}
