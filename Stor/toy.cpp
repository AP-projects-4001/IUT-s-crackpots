#include "toy.h"
#include "fstream"
#include <vector>

using namespace std;

Toy::Toy()
{

}

void Toy::setData(std::string name, int price, int remainingNum, int boughtNum, std::string type,
                           std::string use, std::string about, int user_id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->type = type;
    this->use = use;
    this->about = about;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

string Toy::gettype() {
    return type;
}

string Toy::getuse() {
    return use;
}

string Toy::getabout() {
    return about;
}
