#include "car.h"
#include "fstream"
#include <vector>

using namespace::std;

Car::Car()
{

}

void Car::setData(int id, string name, int price, int remainingNum, int boughtNum, string steeringWheelType, string feulType ,
                    string carClass, int members) {
    this->id = id;
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->steeringWheelType = steeringWheelType;
    this->feulType = feulType;
    this->carClass = carClass;
    this->members = members;
}
