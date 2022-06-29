#ifndef CAR_H
#define CAR_H
#include <string>

#include "good.h"

class Car : public good
{
    enum streeringWheelType { electrical, hydrolic } ;
    enum feulType { petrol, gas, gasoline, gasAndPetrol  };
    enum carClass { sport, superSport };
    int memebers;

public:
    Car();
    void insert(int id, std::string name, int price, int remainingNum, int boughtNum, enum streeringWheelType, enum feulType ,
    enum carClass, int memebers);
};

#endif // CAR_H
