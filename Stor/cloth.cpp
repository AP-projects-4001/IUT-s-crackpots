#include "cloth.h"
#include "fstream"
#include <vector>

using namespace std;

Cloth::Cloth()
{

}

void Cloth::setData(string name, int price, int remainingNum, int boughtNum, string collar,
                   string sleeves , string uses, string tarh, int user_id) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->collar = collar;
    this->sleeves = sleeves;
    this->uses = uses;
    this->tarh = tarh;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

string Cloth::getcollar() {
    return collar;
}

string Cloth::getsleeves() {
    return sleeves;
}

string Cloth::getuses() {
    return uses;
}

string Cloth::gettarh() {
    return tarh;
}
