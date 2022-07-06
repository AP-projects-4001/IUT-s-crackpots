#include "book.h"
#include "fstream"
#include <vector>

using namespace std;

Book::Book()
{

}

void Book::setData(std::string name, int price, int remainingNum, int boughtNum, std::string seriesType,
                  std::string jeldType, std::string awards, std::string language, int user_id) {
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->seriesType = seriesType;
    this->jeldType = jeldType;
    this->awards = awards;
    this->language = language;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

string Book::getseriesType() {
    return seriesType;
}

string Book::getjeldType() {
    return jeldType;
}

string Book::getawards() {
    return awards;
}

string Book::getlanguage() {
    return language;
}



