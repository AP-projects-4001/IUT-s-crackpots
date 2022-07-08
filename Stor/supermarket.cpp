#include "supermarket.h"
#include "fstream"
#include <vector>

using namespace std;

Supermarket::Supermarket()
{

}

void Supermarket::setData(int user_id,std::string name, int price, int remainingNum, int boughtNum, std::string use,
                          std::string about) {
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->use = use;
    this->about = about;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

void Supermarket::setSpecialData(int user_id, std::string name, int price, int remainingNum, int boughtNum, std::string use, std::string about, int id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->use = use;
    this->about = about;
    this->user_id = user_id;
    this->id = id;
}

string Supermarket::getuse() {
    return use;
}

string Supermarket::getabout() {
    return about;
}
