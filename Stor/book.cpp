#include "book.h"
#include "fstream"
#include <vector>

using namespace std;

Book::Book()
{

}

void Book::insert(int id, std::string name, int price, int remainingNum, int boughtNum, enum seriesTypr,
                  enum jeldType, std::string awards, std::string language, std::string about) {
    ofstream outDataBase("/Users/parsakhodadadi/Desktop/data/books.txt",ios::app);
    outDataBase.close();

}
