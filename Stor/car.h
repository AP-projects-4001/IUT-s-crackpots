#ifndef CAR_H
#define CAR_H
#include <string>

#include "good.h"

class Car : public good
{
    std::string steeringWheelType;
    std::string feulType;
    std::string carClass;
    int members;

public:
    Car();
    void setData(int id, std::string name, int price, int remainingNum, int boughtNum, std::string steeringWheelType, std::string feulType ,
    std::string carClass, int mmebers);
};

#endif // CAR_H
