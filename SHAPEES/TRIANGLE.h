#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include <iostream>
#include "SHAPEES.h"

class Triangle : public Shapees
{
public:
    virtual void draw() override;
};


#endif
