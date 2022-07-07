#include "laptop.h"
#include "fstream"
#include <vector>

using namespace std;

Laptop::Laptop()
{

}

void Laptop::setData(std::string name, int price, int remainingNum, int boughtNum,  std::string processorSeries, int limitRAM, std::string memoryType, std::string graphicConstructor, int screenSize, std::string about,
                     int user_id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->processorSeries = processorSeries;
    this->limitRAM = limitRAM;
    this->memoryType = memoryType;
    this->graphicConstructor = graphicConstructor;
    this->screenSize = screenSize;
    this->about = about;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

string Laptop::getprocessorSeries() {
    return processorSeries;
}

int Laptop::getlimitRAM() {
    return limitRAM;
}

string Laptop::getmemoryType() {
    return memoryType;
}

string Laptop::getgraphicConstructor() {
    return graphicConstructor;
}

int Laptop::getscreenSize() {
    return screenSize;
}

string Laptop::getabout() {
    return about;
}
