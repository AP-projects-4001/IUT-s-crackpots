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

public:
    // Constructor
    good();

    // Setter and getter functions
    void setId(int id);
    int getId();
    void setName(std::string name);
    std::string getName();
    void setPrice(int price);
    int getPrice();
    void setRemainingNum(int remainingNum);
    int getRemainingNum();
    void setBoughtNum(int boughtNum);
    int getBoughtNum();


    // Other functions for model
    virtual void getGoods();
    virtual void insert();
};

#endif // GOOD_H
