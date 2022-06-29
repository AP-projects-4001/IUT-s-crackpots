#ifndef TOY_H
#define TOY_H
#include <string>

#include "good.h"

class Toy : public good
{
    std::string type;
    std::string use;
    std::string about;
public:
    Toy();
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string type,
    std::string use, std::string about);
};

#endif // TOY_H
