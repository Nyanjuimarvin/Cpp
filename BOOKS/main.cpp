#include <iostream>
#include <iomanip>
#include "BOOK.h"

using namespace std;

int main()
{
    Book book1("JK ROWLING","NEW YORK DIME","FANTASY,MAGIC,MEDIEVAL",2021,789,16,765.5);
    Book book2("ICEJJFISH","HEADSHOT PRODUCTIONS","GOSPEL,MEME,PARODY,COMEDY",2015,23,18,23.66);

    book1.bookDetails();
    book2.bookDetails();
    return 0;
}
