#ifndef ENGLISH_H
#define ENGLISH_H

#include <map>
#include <iostream>
#include "language.h"

class English : protected Language
{

public:
    English();
    void setWords();
};

#endif // ENGLISH_H
