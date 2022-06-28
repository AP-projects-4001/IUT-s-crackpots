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
};

#endif // MOBILE_H
