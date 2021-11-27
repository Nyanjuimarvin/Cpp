#include <iostream>
#include <string>
#include "DATE.h"

using namespace std;
//INITIALIZE STATIC MEMBER :: ONE CLASSWIDE COPY
const array< unsigned int, 13 >Date::days=
{0,31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date( int month, int day, int year )
{
    setdate( month, day, year );
}

void Date::setdate( int mm, int dd, int yy )
{
   if( mm >= 1 && mm <= 12 )
      month = mm;
   else
   {
    throw invalid_argument( "MONTHS MUST BE >= 1 OR <= 12" );
   }


    if( yy >= 1900 && yy <= 2100 )
        year = yy;
    else
        throw invalid_argument( "YEARS MUST BE >=1900 OR <= 2100" );

    if(( month == 2 && leapYear( year ) && dd >= 1 && dd <= 29 ) ||
    ( dd >= 1 && dd <= days[month]))
    day = dd;
    else
        throw invalid_argument( "DAY IS OUT OF RANGE");

}

//OVERLOAD PREFIX
Date &Date::operator++()
{
    helpIncrement();
    return *this;//REFERENCE RERTURN TO CREATE AN LVALUE
}


//OVERLOAD POSTFIX
Date Date::operator++( int )
{
    Date temp = *this;//HOLD CURRENT STATE OF OBJECT
    helpIncrement();
 //RETURN UNINCREMENTED ,SAVED , TEMPORARY OBJECT
    return temp;//VALUE RETURN //NOT A REFERENCE RETURN
}

Date &Date::operator+=( unsigned int additionalDays )
{
    for( int i = 0; i < additionalDays; ++i )
        helpIncrement();

    return *this;//ENABLES CASCADING
}


bool Date::leapYear( int testYear )
{
    if( (testYear % 400 == 0) ||
      ( testYear % 100 != 0 && testYear % 4 == 0 ))
        return true;

    else
        return false;
}


bool Date::endOfMonth( int testDay )const
{
    if( month == 2 && leapYear( year ))
        return testDay == 29;

    else
        return testDay == days[month];
}

void Date::helpIncrement()
{
    if( !endOfMonth( day ))//DAY IS NOT THE END OF MONTH
        ++day;
    else
        if( month < 12 )
        {
            ++month;
            day = 1;//FIRST DAY OF NEW MONTH
        }
        else//LAST DAY OF YEAR
        {
            ++year;//INCREMENT YEAR
            month = 1;//FIRST MONTH OF NEW YEAR
            day = 1;
        }
}

ostream &operator<<( ostream &output, const Date &d )
{
    static string monthName[13]=
    {
        "", "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY",
        "AUGUST","SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"
    };

    output << monthName[d.month] << ' ' << d.day << "," << d.year;

    return output; //ENABLE CASCADING
}
