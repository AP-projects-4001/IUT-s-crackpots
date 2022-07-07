#ifndef BOOK_H
#define BOOK_H
#include <string>

#include "good.h"

class Book : public good
{
   std::string seriesType;
   std::string jeldType;
   std::string awards;
   std::string language;
   static int idCounter;

public:
    Book();
    void setData(std::string name, int price, int remainingNum, int boughtNum, std::string seriesType,
                std::string jeldType, std::string awards, std::string language, int user_id);
    std::string getseriesType();
    std::string getjeldType();
    std::string getawards();
    std::string getlanguage();
    std::string getabout();

};

#endif // BOOK_H
