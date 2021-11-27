#ifndef REQXNEW_H_INCLUDED
#define REQXNEW_H_INCLUDED

#include <iostream>

#include "BOOK.h"

class REQXNEW : public Book
{
public:
    REQXNEW();
    ~REQXNEW();


      virtual double calculate_Profit()override;
      virtual double total_Cost()const override;

};



#endif
