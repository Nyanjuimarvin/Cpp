#include <iostream>
#include <stdexcept>

#include "BOOK.h"
#include "OPTXNEW.h"

OPTXNEW::OPTXNEW()
{

}

double OPTXNEW::calculate_Profit()
{
    return ( 0.2 * total_Cost());
}

double OPTXNEW::total_Cost()const
{
    return ( 0.4 * getprospective_Enrollment()) * getbook_price();
}
