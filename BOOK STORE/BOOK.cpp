#include <iostream>
#include <stdexcept>

#include "BOOK.h"

Book::Book()
{

}

void Book::setbooks_on_hand( unsigned int bx )
{
    if( bx > 1 )
        books_on_hand = bx;
}

unsigned int Book::getbooks_on_hand()const
{
    std::cout << "ENTER BOOKS AT HAND:\n\n";
    return books_on_hand;
}

void Book::setprospective_Enrollment( int enr )
{
    if( enr > 1 )
        prospective_Enrollment = enr;
}

int Book::getprospective_Enrollment()const
{
    return prospective_Enrollment;
}


void Book::setbook_price( double prc )
{
    if( prc > 1 )
        book_Price = prc;
}


double Book::getbook_price()const
{
    return book_Price;
}


double Book::total_Cost()const
{
    return getbook_price() * getprospective_Enrollment();
}


void Book::setbook_code( std::string bcode )
{
   book_Code = bcode ;
}

std::string Book::getbook_code()const
{
    return book_Code;
}

double Book::calculate_Profit()
{
    return ( 0.2 * total_Cost());
}


std::ostream &operator<<( std::ostream &output, const Book &book )
{
    output << book.book_Code;
    output << book.book_Price;
    output << book.books_on_hand;
    output << book.prospective_Enrollment;
    output << "***************************************************";

    return output;
}



std::istream &operator>>( std::istream &input, Book &book )
{
    input >> book.book_Code;
    input >> book.book_Price;
    input >> book.books_on_hand;
    input >> book.prospective_Enrollment;

    return input;
}
