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
    ofstream outDataBase("database.txt",ios_base::app);
    outDataBase.close();
}
