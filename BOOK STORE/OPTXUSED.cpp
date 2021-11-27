#include <iostream>
#include <stdexcept>

#include "BOOK.h"
#include "OPTXUSED.h"

OPTXUSED::OPTXUSED()
{

}

double OPTXUSED::calculate_Profit()
{
    return ( 0.2 * total_Cost() );
}


double OPTXUSED::total_Cost()const
{
    return ( 0.2 * getprospective_Enrollment() ) * getbook_price();
}
