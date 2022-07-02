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
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string use,
    std::string deprecationTime, std::string about);
};

#endif // HEALTH_H
