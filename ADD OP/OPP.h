//Create a simple class containing an int
// and overload the operator+ as a member function.
// Also provide a print( ) member function that takes
//an ostream& as an argument and prints to that ostream&.
//Test your class to show that it works correctly.

#ifndef OPP_H_INCLUDED
#define OPP_H_INCLUDED

#include <iostream>


class Opp
{
    friend std::ostream &operator<<( std::ostream &, const Opp & );
    friend std::istream &operator>>( std::istream &, Opp & );

public:
    Opp();
    ~Opp();
    int operator +( int );
    void Print( std::ostream&);


private:
    int *number;
    void helpAdd();

};


#endif
