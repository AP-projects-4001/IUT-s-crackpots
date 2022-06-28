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
};

#endif // CAR_H
