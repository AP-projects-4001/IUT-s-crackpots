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
    enum operatingSystem { android, iOS, WindowsPhone };
public:
    Mobile();
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, int memoryGB, std::string screenTech, std::string networks, int rezoloutionMPx,
    enum operatingSystem);
};

#endif // MOBILE_H
