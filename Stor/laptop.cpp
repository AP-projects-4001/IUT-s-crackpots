#include "laptop.h"
#include "fstream"
#include <vector>

using namespace std;

Laptop::Laptop()
{

}

void Laptop::insert(int id, std::string name, int price, int remainingNum, int boughtNum,  std::string processorSeries, int limitRAM, std::string memoryType, std::string graphicConstructor, int screenSize, std::string about)
{
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/laptps.txt",ios::app);
    outDataBase.close();
}
