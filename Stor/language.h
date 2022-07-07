#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <map>
#include <iostream>

class Language
{
protected:
    std::map<std::string, std::string> languageDic;
public:
    Language();
    std::string getWordbyKey(std::string findKey);
    virtual void setWords();
};

#endif // LANGUAGE_H
