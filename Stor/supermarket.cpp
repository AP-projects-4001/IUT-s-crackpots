#include "supermarket.h"
#include "fstream"
#include <vector>

using namespace std;

Supermarket::Supermarket()
{

}

void Supermarket::insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string use,
    std::string about)
{
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/supermarket.txt",ios::app);
    outDataBase.close();
}
