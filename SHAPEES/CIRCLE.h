#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include <iostream>
#include "SHAPEES.h"


class Circle : public Shapees
{
public:
    virtual void draw() override;
};
#endif // CIRCLE_H_INCLUDED
