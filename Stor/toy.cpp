#include "toy.h"
#include "fstream"
#include <vector>

using namespace std;

Toy::Toy()
{

}

void Toy::insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string type,
                 std::string use, std::string about)
{
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/toys.txt",ios::app);
    outDataBase.close();
}
