#include "supermarket.h"
#include "fstream"
#include <vector>

using namespace std;

Supermarket::Supermarket()
{

}

void Supermarket::setData(std::string name, int price, int remainingNum, int boughtNum, std::string use,
                          std::string about, int user_id) {
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

string Supermarket::getuse() {
    return use;
}

string Supermarket::getabout() {
    return about;
}
