#ifndef CLOTH_H
#define CLOTH_H
#include <string>

#include "good.h"

class Cloth : public good
{
    std::string collar;
    std::string sleeves;
    std::string uses;
    std::string tarh;
public:
    Cloth();
    void setData(int id, std::string name, int price, int remainingNum, int boughtNum, std::string collar,
    std::string sleeves , std::string uses, std::string tarh);
};

#endif // CLOTH_H
