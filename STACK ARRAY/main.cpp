#include <iostream>
#include <iomanip>
#include <array>
#include "STACK.h"



using namespace std;

int main()
{
    stack *x=new stack();
    x->push( 34 );
    x->push( 54 );
    x->push( 76 );
    x->push( 43 );
    x->push( 34 );
    x->push( 45 );
    x->push( 12 );
    x->push( 23 );
    x->push( 89 );
    x->push( 56 );
    x->push( 134 );
    x->push(234);

    x->peek();
    return 0;
}
