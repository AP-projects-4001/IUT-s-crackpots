#include "mobile.h"
#include "fstream"
#include <vector>

using namespace std;

Mobile::Mobile()
{

}

void Mobile::insert(int id, std::string name, int price, int remainingNum, int boughtNum, int memoryGB, std::string screenTech, std::string networks, int rezoloutionMPx,
                    enum operatingSystem)
{
    ofstream outDataBase("database.txt",ios_base::app);
    outDataBase.close();
}
