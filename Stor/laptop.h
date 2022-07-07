#ifndef LAPTOP_H
#define LAPTOP_H
#include <string>

#include "good.h"

class Laptop : public good
{
    std::string processorSeries;
    int limitRAM;
    std::string memoryType;
    std::string graphicConstructor;
    int screenSize;
    std::string about;
    static int idCounter;
public:
    Laptop();
    void setData(std::string name, int price, int remainingNum, int boughtNum,  std::string processorSeries, int limitRAM, std::string memoryType, std::string graphicConstructor, int screenSize, std::string about,
                  int user_id);
    std::string getprocessorSeries();
    int getlimitRAM();
    std::string getmemoryType();
    std::string getgraphicConstructor();
    int getscreenSize();
    std::string getabout();
};

#endif // LAPTOP_H
