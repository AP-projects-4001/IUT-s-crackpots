#include "cloth.h"
#include "fstream"
#include <vector>

using namespace std;

Cloth::Cloth()
{

}

void Cloth::setData(int id, string name, int price, int remainingNum, int boughtNum, string collar,
                   string sleeves , string uses, string tarh) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->collar = collar;
    this->sleeves = sleeves;
    this->uses = uses;
    this->tarh = tarh;
}
