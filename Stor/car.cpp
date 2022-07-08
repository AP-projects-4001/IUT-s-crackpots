#include "car.h"
#include "fstream"
#include <vector>

using namespace::std;

Car::Car()
{

}

void Car::setData(int user_id,string name, int price, int remainingNum, int boughtNum, string steeringWheelType, string feulType ,
                    string carClass ) {
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

void Car::setSpecialData(int user_id, std::string name, int price, int remainingNum, int boughtNum, std::string steeringWheelType, std::string feulType, std::string carClass, int id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->steeringWheelType = steeringWheelType;
    this->feulType = feulType;
    this->carClass = carClass;
    this->user_id = user_id;
    this->id = id;
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
