#ifndef SUPERMARKET_H
#define SUPERMARKET_H
#include <string>

#include "good.h"

class Supermarket : public good
{
    std::string use;
    std::string about;
    static int idCounter;
public:
    Supermarket();
    void setData(int user_id,std::string name, int price, int remainingNum, int boughtNum, std::string use,
    std::string about);
    void setSpecialData(int user_id ,std::string name, int price, int remainingNum, int boughtNum, std::string use,
    std::string about,int id );
    std::string getuse();
    std::string getabout();
    void setremaining(int r);
    void setBought(int b);
};

#endif // SUPERMARKET_H
