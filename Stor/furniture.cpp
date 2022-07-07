#include "furniture.h"
#include "fstream"
#include <vector>

using namespace std;

Furniture::Furniture()
{

}

void Furniture::setData(std::string name, int price, int remainingNum, int boughtNum, std::string garantee, std::string use, std::string about, int user_id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->garantee = garantee;
    this->use = use;
    this->about = about;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

string Furniture::getgarantee() {
    return garantee;
}

string Furniture::getuse() {
    return use;
}

string Furniture::getabout() {
    return about;
}
