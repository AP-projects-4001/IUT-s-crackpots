#ifndef CAR_H
#define CAR_H
#include <string>

#include "good.h"

class Car : public good
{
    std::string steeringWheelType;
    std::string feulType;
    std::string carClass;
    static int idCounter;

public:
    Car();
    void setData(std::string name, int price, int remainingNum, int boughtNum, std::string steeringWheelType, std::string feulType ,
    std::string carClass, int user_id);
    std::string getsteeringWheelType();
    std::string getfeulType();
    std::string getcarClass();
};

#endif // CAR_H
