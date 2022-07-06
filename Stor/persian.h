#ifndef PERSIAN_H
#define PERSIAN_H
#include "language.h"

#include <map>
#include <iostream>

class Persian : protected Language
{
public:
    Persian();
    void setWords();
};

#endif // PERSIAN_H
