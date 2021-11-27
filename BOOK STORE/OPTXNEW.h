#ifndef OPTXNEW_H_INCLUDED
#define OPTXNEW_H_INCLUDED

#include <iostream>

#include "BOOK.h"

class OPTXNEW : public Book
{
   public:
       OPTXNEW();
       ~OPTXNEW();

       virtual double calculate_Profit()override;
       virtual double total_Cost()const override;

};



#endif
