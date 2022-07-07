#include "car.h"
#include "fstream"
#include <vector>

using namespace::std;

Car::Car()
{

}

void Car::setData(string name, int price, int remainingNum, int boughtNum, string steeringWheelType, string feulType ,
                    string carClass, int user_id) {
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->steeringWheelType = steeringWheelType;
    this->feulType = feulType;
    this->carClass = carClass;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

std::string Car::getsteeringWheelType() {
    return steeringWheelType;
}

std::string Car::getfeulType() {
    return feulType;
}

std::string Car::getcarClass() {
    return carClass;
}
