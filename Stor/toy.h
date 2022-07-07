#ifndef TOY_H
#define TOY_H
#include <string>

#include "good.h"

class Toy : public good
{
    std::string type;
    std::string use;
    std::string about;
    static int idCounter;
public:
    Toy();
    void setData(std::string name, int price, int remainingNum, int boughtNum, std::string type,
    std::string use, std::string about, int user_id);
    std::string gettype();
    std::string getuse();
    std::string getabout();
};

#endif // TOY_H
