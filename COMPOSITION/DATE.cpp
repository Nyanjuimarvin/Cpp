#include <iostream>
#include <array>
#include <stdexcept>
#include "DATE.h"

using namespace std;

Date::Date( int mn, int dy, int yr )
{
    if( mn > 0 && mn <= monthsPerYear )
        month = mn;
    else
        throw invalid_argument( "MONTH MUST BE > 0 AND <= 12" );

    year=yr;
    day=checkDay( dy );


    //OUTPUT DATE OBJECT TO SHOW WHEN ITS CONSTRUCTOR IS CALLED

    cout << "DATE OBJECT CONSTRUCTOR FOR date ";
    print();
    cout << endl;
}

void Date::print()const
{
    cout << month << "/" << day <<"/" << year << endl;
}

Date::~Date()
{
    cout << "DATE OBJECT DESTRUCTOR FOR date";
    print();
    cout << endl;
}


unsigned int Date::checkDay( int testDay )const
{
    static const array< int, monthsPerYear + 1 >daysperMonth
    {31,28,31,30,31,30,31,31,30,31,30,31};

   if( testDay > 0 && testDay < daysperMonth[month] )
        return testDay;


   if( month == 2 && testDay == 29 && ( year % 400 == 0||year % 4 == 0 && year % 100 != 0 ))
    return testDay;

   throw invalid_argument( "INVALID DAY FOR CURR MONTH AND YEAR" );
}
