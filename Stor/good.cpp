#include "good.h"

good::good()
{

}

int good::getId()
{
    return id;
}

int good::getUsId() {
    return user_id;
}

std::string good::getName() {
    return name;
}

int good::getPrice() {
    return price;
}

int good::getRemainingNum() {
    return remainingNum;
}

int good::getBoughtNum() {
    return boughtNum;
}
