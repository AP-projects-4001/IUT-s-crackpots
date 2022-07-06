#ifndef GOOD_H
#define GOOD_H

#include <string>

class good
{
protected:
    int id;
    std::string name;
    int price;
    int remainingNum;
    int boughtNum;
    int user_id;

public:

    // Setter and getter functions
    void setId(int id);
    int getId();
    int getUsId();
    std::string getName();
    int getPrice();
    int getRemainingNum();
    int getBoughtNum();

public:
    good();
};

#endif // GOOD_H
