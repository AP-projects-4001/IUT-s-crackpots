#ifndef CLOTH_H
#define CLOTH_H
#include <string>

#include "good.h"

class Cloth : public good
{
    std::string collar;
    std::string sleeves;
    std::string uses;
    std::string tarh;
    static int idCounter;
public:
    Cloth();
    void setData(std::string name, int price, int remainingNum, int boughtNum, std::string collar,
    std::string sleeves , std::string uses, std::string tarh, int user_id);
    std::string getcollar();
    std::string getsleeves();
    std::string getuses();
    std::string gettarh();
};

#endif // CLOTH_H
