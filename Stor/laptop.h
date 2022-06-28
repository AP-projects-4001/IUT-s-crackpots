#ifndef LAPTOP_H
#define LAPTOP_H
#include <string>

#include "good.h"

class Laptop : public good
{
    std::string processorSeries;
    int limitRAM;
    std::string memoryType;
    std::string graphicConstructor;
    int screenSize;
    std::string about;
public:
    Laptop();
};

#endif // LAPTOP_H
