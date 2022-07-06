#include "mobile.h"
#include "fstream"
#include <vector>

using namespace std;

Mobile::Mobile()
{

}

void Mobile::setData(string name, int price, int remainingNum, int boughtNum, int memoryGB, string screenTech, string networks, int rezoloutionMPx,
                    string operatingSystem, int user_id)
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
