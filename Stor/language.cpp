#include "language.h"

using namespace::std;

Language::Language()
{

}

string Language::getWordbyKey(string findKey) {
    return languageDic.find(findKey)->first;
}

void Language::setWords() {

}
