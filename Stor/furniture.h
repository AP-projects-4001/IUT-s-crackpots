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
};

#endif // FURNITURE_H
