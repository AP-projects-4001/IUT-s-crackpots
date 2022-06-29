#include "cloth.h"
#include "fstream"
#include <vector>

using namespace std;

Cloth::Cloth()
{

}

void Cloth::insert(int id, std::string name, int price, int remainingNum, int boughtNum, enum collar,
                   enum sleeves , std::string uses, std::string tarh) {
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/clothes.txt",ios::app);
    outDataBase.close();
}
