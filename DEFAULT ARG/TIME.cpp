#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "TIME.h"

using namespace std;

Time::Time( int hour, int minute, int second)
{
    setTime( hour, minute, second );
}

//SET FUNCTIONS

void Time::setTime( int h, int m, int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}

void Time::setHour( int h )
{
    if( h >= 0 && h < 24 )
        hour = h;
    else
        throw invalid_argument( "HOUR MUST BE >= 0 AND < 24" );
}

void Time::setMinute( int m )
{
    if( m >= 0 && m < 60 )
        minute = m;
    else
        throw invalid_argument( "MINUTE MUST BE >= 0 AND < 60");
}

void Time::setSecond( int s )
{
    if( s >=0 && s < 60 )
        second = s;
    else
        throw invalid_argument( "SECOND MUST BE >= 0 AND <  60");
}


unsigned int Time::getHour()const
{
    return hour;
}

unsigned int Time::getMinute()const
{
    return minute;
}

unsigned int Time::getSecond()const
{
    return second;
}

void Time::printStandard()const
{
    cout << setfill('0')<< setw(2) << getHour() << ":" << setw(2)
         << getMinute() << ":" <<setw(2) << getSecond();
    cout << endl;
}

void Time::printUniversal()const
{
    cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour()% 12 )//CONVERT FROM 24 HOUR TO 12 HR
         << ":" << setfill('0') << setw(2) << getMinute() << ":"
         << setw(2) << getSecond() << setw(2)
         << ( hour < 12 ? " AM" : " PM" );//SET AM OR PM

    cout<<endl;
}
