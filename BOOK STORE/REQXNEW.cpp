#include <iostream>
#include <stdexcept>

#include "BOOK.h"
#include "REQXNEW.h"


REQXNEW::REQXNEW()
{

}

double REQXNEW::calculate_Profit()
{
    return ( 0.2 * total_Cost());
}


double REQXNEW::total_Cost()const
{
    return ( 0.9 * getprospective_Enrollment()) * getbook_price();
}
