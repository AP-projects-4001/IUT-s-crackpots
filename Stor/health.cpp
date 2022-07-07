#include "health.h"
#include "fstream"
#include <vector>

using namespace std;

Health::Health()
{

}

void Health::setData(std::string name, int price, int remainingNum, int boughtNum, std::string use,
                    std::string deprecationTime, std::string about, int user_id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->use = use;
    this->deprecationTime = deprecationTime;
    this->about = about;
    this->user_id =user_id;
    this->id = idCounter;
    idCounter++;
}

string Health::getuse() {
    return use;
}

string Health::getdeprecationTime() {
    return deprecationTime;
}

string Health::getabout() {
    return about;
}
