#include "car.h"
#include "fstream"
#include <vector>

using namespace::std;

Car::Car()
{

}

void Car::insert(int id, std::string name, int price, int remainingNum, int boughtNum, enum streeringWheelType, enum feulType ,
                    enum carClass, int memebers) {
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/cars.txt",ios::app);
    outDataBase.close();
}
