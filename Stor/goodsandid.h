#ifndef GOODSANDID_H
#define GOODSANDID_H
#include<iostream>
#include <string>
using namespace std;
class goodsAndID
{

protected:
    string name;
    string  cat;
    int goodsId;

public:
    goodsAndID();
    void setData(string n,string c,int i);
    void setId(int i);
    void setCat(string c);
    void setName(string n);
    string getName();
    int getId();
    string getCat();
};

#endif // GOODSANDID_H
