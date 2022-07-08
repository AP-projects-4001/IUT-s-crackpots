#include "goodsandid.h"

goodsAndID::goodsAndID()
{

}

void goodsAndID::setData(string n,string c, int i)
{
    cat=c;
    name=n;
    goodsId=i;
}

void goodsAndID::setId(int i)
{
    goodsId=i;
}

void goodsAndID::setCat(string c)
{
    cat=c;
}

void goodsAndID::setName(string n)
{
    name=n;
}

string goodsAndID::getName()
{
    return name;
}
int goodsAndID::getId()
{
    return goodsId;
}

string goodsAndID::getCat()
{
    return cat;
}
