#include <iostream>
#include "SHAPEES.h"


Shapees::Shapees()
{

}

void Shapees::setSides(int c)
{
    if( c > 0 )
        Sides = c;
}

int Shapees::getSides()const
{
    return Sides;
}

void Shapees::draw()
{
    std::cout << "************"
         << "************";
}
