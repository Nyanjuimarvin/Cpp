#ifndef OPTXUSED_H_INCLUDED
#define OPTXUSED_H_INCLUDED

#include <iostream>

#include "BOOK.h"

class OPTXUSED : public Book
{
public:
    OPTXUSED();
    ~OPTXUSED();

    virtual double calculate_Profit()override;
    virtual double total_Cost()const override;


};



#endif
