#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <array>
#include <iostream>


class Date
{
    friend std::ostream &operator<<( std::ostream &, const Date & );

public:
    Date( int m = 1, int d = 1, int y = 1900 );//default constructor
    void setdate( int, int, int );
    Date &operator ++();
    Date operator ++( int );
    Date &operator +=( unsigned int );
    static bool leapYear ( int );
    bool endOfMonth( int )const;

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    static const std::array< unsigned int, 13 >days;//ARRAY FOR DAYS PER MONTH
    void helpIncrement();//UTILITY FUNCTION
};
#endif
