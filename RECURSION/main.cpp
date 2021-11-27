//FACTORIALS OF NUMBERS LESS THAN 10 WITH RECURSION
#include <iostream>
#include <iomanip>


using namespace std;

unsigned long Factorial( unsigned long );//PROTOTYPE


int main()
{

    for(unsigned int counter=0; counter <= 10; ++counter)//FACTORIALS OF 0 THROUGH 10
        cout<<setw( 4 )<<counter<<"!"<<Factorial( counter )<<endl;


    return 0;
}

unsigned long Factorial( unsigned long number )//RECURSIVE DEF OF FUNCTION FACTORIAL
{
    if( number < 1 )//TEST FOR BASE CASE
        return 1;//BASE CASE:0!=1 AND 1!=1
    else//RECURSION STEP
        return number * Factorial( number - 1 );
}

