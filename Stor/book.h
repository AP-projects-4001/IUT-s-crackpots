#ifndef BOOK_H
#define BOOK_H
#include <string>

#include "good.h"

class Book : public good
{
    enum seriesTypr{literature,
                     comedy,
                     comic,
                     mystery,
                     romance,
                     biography,
                     autobiography,
                     novel,
                   };
   enum jeldType { type1, type2 };
   std::string awards;
   std::string language;
   std::string about;
public:
    Book();
};

#endif // BOOK_H
