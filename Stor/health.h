#ifndef HEALTH_H
#define HEALTH_H
#include <string>

#include "good.h"

class Health : public good
{
    std::string use;
    std::string deprecationTime;
    std::string about;
public:
    Health();
};

#endif // HEALTH_H
