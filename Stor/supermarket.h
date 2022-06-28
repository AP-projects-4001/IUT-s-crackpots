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
};

#endif // SUPERMARKET_H
