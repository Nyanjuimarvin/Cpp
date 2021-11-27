#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#include <iostream>
#include "SHAPEES.h"


class Square : public Shapees
{
public:
    virtual void draw() override;
};

#endif // SQUARE_H_INCLUDED
