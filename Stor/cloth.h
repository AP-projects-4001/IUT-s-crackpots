#ifndef CLOTH_H
#define CLOTH_H
#include <string>

#include "good.h"

class Cloth : public good
{
    enum collar { circle, v };
    enum sleeves { shortS, longS };
    std::string uses;
    std::string tarh;
public:
    Cloth();
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, enum collar,
    enum sleeves , std::string uses, std::string tarh);
};

#endif // CLOTH_H
