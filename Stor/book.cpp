#include "book.h"
#include "fstream"
#include <vector>

using namespace std;

Book::Book()
{

}

void Book::setData(int id, std::string name, int price, int remainingNum, int boughtNum, std::string seriesType,
                  std::string jeldType, std::string awards, std::string language, std::string about) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->seriesType = seriesType;
    this->jeldType = jeldType;
    this->awards = awards;
    this->language = language;
    this->about = about;


}

