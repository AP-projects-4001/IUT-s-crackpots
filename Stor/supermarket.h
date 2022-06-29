#ifndef SUPERMARKET_H
#define SUPERMARKET_H
#include <string>

#include "good.h"

class Supermarket : public good
{
    std::string use;
    std::string about;
public:
    Supermarket();
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string use,
    std::string about);
};

#endif // SUPERMARKET_H
