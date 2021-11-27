#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>

class Book
{
    friend std::ostream &operator<<( std::ostream &, const Book & );
    friend std::istream &operator>>( std::istream &, Book & );

public:
    Book();
    ~Book();


    void setbooks_on_hand( unsigned int );
    unsigned int getbooks_on_hand()const;
    void setprospective_Enrollment( int );
    int getprospective_Enrollment()const;
    void setbook_price( double );
    double getbook_price()const;
    void setbook_code( std::string );
    std::string getbook_code()const;

    virtual double total_Cost()const= 0;
    virtual double calculate_Profit();


private:

    std::string book_Code;
    double book_Price;
    unsigned int books_on_hand;
    int prospective_Enrollment;
    void store_book_data();


};



#endif
