#include <iostream>
#include "OPP.h"

Opp::Opp()
{

}

int Opp::operator+( int p )
{
   Opp temp = *this;
   helpAdd();
   return temp;
}


void Opp::Print( std::ostream &output )
{
    std::cout << output;
}



ostream &operator<<( std::ostream &output, const Opp &x )
{
    output << x;
}


istream &operator>>( std::istream &input, Opp &x )
{
    input >> x;
}

void Opp::helpAdd()
{
  if( day > 0 )
        *number + p;
}
