#include <iostream>
#include <stdexcept>

#include "BOOK.h"
#include "REQXUSED.h"


REQXUSED::REQXUSED()
{

}


double REQXUSED::calculate_Profit()
{
    return ( 0.2 * total_Cost());
}



double REQXUSED::total_Cost()const
{
    return (0.65 * getprospective_Enrollment()) * getbook_price();
}
