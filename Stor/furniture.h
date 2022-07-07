#ifndef FURNITURE_H
#define FURNITURE_H
#include "string"

#include "good.h"

class Furniture : public good
{
    std::string garantee;
    std::string use;
    std::string about;
    static int idCounter;
public:
    Furniture();
    void setData(std::string name, int price, int remainingNum, int boughtNum, std::string garantee, std::string use, std::string about, int user_id);
    std::string getgarantee();
    std::string getuse();
    std::string getabout();
};

#endif // FURNITURE_H
