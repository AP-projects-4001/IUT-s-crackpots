#include "mobile.h"
#include "fstream"
#include <vector>

using namespace std;

Mobile::Mobile()
{

}

void Mobile::setData(int user_id,string name, int price, int remainingNum, int boughtNum, int memoryGB, string screenTech, string networks, int rezoloutionMPx,
                    string operatingSystem)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->memoryGB = memoryGB;
    this->screenTech = screenTech;
    this->networks = networks;
    this->rezoloutionMPx = rezoloutionMPx;
    this->operatingSystem = operatingSystem;
    this->user_id = user_id;
    this->id = idCounter;
    idCounter++;
}

void Mobile::setSpecialData(int user_id, std::string name, int price, int remainingNum, int boughtNum, int memoryGB, std::string screenTech, std::string networks, int rezoloutionMPx, std::string operatingSystem, int id)
{
    this->name = name;
    this->price = price;
    this->remainingNum = remainingNum;
    this->boughtNum = boughtNum;
    this->memoryGB = memoryGB;
    this->screenTech = screenTech;
    this->networks = networks;
    this->rezoloutionMPx = rezoloutionMPx;
    this->operatingSystem = operatingSystem;
    this->user_id = user_id;
    this->id = id;
}

int Mobile::getmemoryGB() {
    return memoryGB;
}

string Mobile::getscreenTech() {
    return screenTech;
}

string Mobile::getnetworks() {
    return networks;
}

int Mobile::getrezoloutionMPx() {
    return rezoloutionMPx;
}

string Mobile::getoperatingSystem() {
    return operatingSystem;
}

void Mobile::setremaining(int r)
{
    remainingNum=r;
}

void Mobile::setBought(int b)
{
    boughtNum=b;
}
