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
};

#endif // TOY_H
