#ifndef MOBILE_H
#define MOBILE_H
#include <string>

#include "good.h"

class Mobile : public good
{
    int memoryGB;
    std::string screenTech;
    std::string networks;
    int rezoloutionMPx;
    std::string operatingSystem;
    static int idCounter;
public:
    Mobile();
    void setData(std::string name, int price, int remainingNum, int boughtNum, int memoryGB, std::string screenTech, std::string networks, int rezoloutionMPx,
    std::string operatingSystem, int user_id);
    int getmemoryGB();
    std::string getscreenTech();
    std::string getnetworks();
    int getrezoloutionMPx();
    std::string getoperatingSystem();
};

#endif // MOBILE_H
