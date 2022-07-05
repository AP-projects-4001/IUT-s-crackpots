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
   std::string about;
public:
    Book();
    void setData(int id, std::string name, int price, int remainingNum, int boughtNum, std::string seriesType,
                std::string jeldType, std::string awards, std::string language, std::string about);

};

#endif // BOOK_H
