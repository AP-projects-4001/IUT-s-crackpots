#include "furniture.h"
#include "fstream"
#include <vector>

using namespace std;

Furniture::Furniture()
{

}

void Furniture::insert(int id, std::string name, int price, int remainingNum, int boughtNum, std::string garantee, std::string uses, std::string about)
{
    ofstream outDataBase("database.txt",ios_base::app);
    outDataBase.close();
}
