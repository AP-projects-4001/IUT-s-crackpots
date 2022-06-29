#include "userprofile.h"

UserProfile::UserProfile()
{

}

<<<<<<< HEAD
void UserProfile::setData(string u,string p,string fn,string ln,string e,string a,string r)
=======
void UserProfile::setData(string fn,string ln,string u,string p,string e,string a,string r)
>>>>>>> remotes/origin/arash
{
    fName=fn;
    lName=ln;
    username=u;
    password=p;
    email=e;
    address=a;
    role=r;
<<<<<<< HEAD
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

=======
    idCounter++;
    id=idCounter;

}

>>>>>>> remotes/origin/arash
int UserProfile::getId()
{
    return id;
}

string UserProfile::getUsername()
{
    return username;
}
<<<<<<< HEAD

string UserProfile::getPassword()
{
    return password;
}

string UserProfile::getRole()
{
    return role;
}
=======
>>>>>>> remotes/origin/arash
