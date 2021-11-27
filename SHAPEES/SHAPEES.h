#ifndef SHAPEES_H_INCLUDED
#define SHAPEES_H_INCLUDED

#include <iostream>
#include <array>


class Shapees
{
   std::array< Shapees *, 3 > x;

   public:
       Shapees();
       void setSides(int);
       int getSides()const;
       virtual void draw();

   private:
    int Sides;
};

#endif
