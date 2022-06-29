#include "health.h"
#include "fstream"
#include <vector>

using namespace std;

Health::Health()
{

}

void Health::insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string use,
                    std::string deprecationTime, std::string about)
{
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/health.txt",ios::app);
    outDataBase.close();
}
