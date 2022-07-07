#ifndef HEALTH_H
#define HEALTH_H
#include <string>

#include "good.h"

class Health : public good
{
    std::string use;
    std::string deprecationTime;
    std::string about;
    static int idCounter;
public:
    Health();
    void setData(std::string name, int price, int remainingNum, int boughtNum, std::string use,
    std::string deprecationTime, std::string about, int user_id);
    std::string getuse();
    std::string getdeprecationTime();
    std::string getabout();
};

#endif // HEALTH_H
