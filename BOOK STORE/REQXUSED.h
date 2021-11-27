#ifndef REQXUSED_H_INCLUDED
#define REQXUSED_H_INCLUDED

#include <iostream>

#include "BOOK.h"

class REQXUSED : public Book
{
public:
    REQXUSED();
    ~REQXUSED();


     virtual double calculate_Profit()override;
     virtual double total_Cost()const override;
};



#endif
