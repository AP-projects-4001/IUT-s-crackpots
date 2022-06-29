#ifndef FURNITURE_H
#define FURNITURE_H
#include "string"

#include "good.h"

class Furniture : public good
{
    std::string garantee;
    std::string uses;
    std::string about;
public:
    Furniture();
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string garantee, std::string uses, std::string about);
};

#endif // FURNITURE_H
