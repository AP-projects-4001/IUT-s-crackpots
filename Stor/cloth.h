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
};

#endif // CLOTH_H
