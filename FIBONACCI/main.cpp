//FIBONACCI SEQUENCE BY RECURSION
#include <iostream>
#include <iomanip>

using namespace std;


unsigned long Fibonacci( unsigned long );

int main()
{

    for( unsigned int counter=0; counter<=10; ++counter )
        cout<<"fibonacci("<<counter<<") ="
        <<Fibonacci( counter )<<endl;

        cout <<"FIBONNACI(23)="<<Fibonacci(23);
    return 0;
}

unsigned long Fibonacci( unsigned long number )
{
    if( ( number == 0) || ( number == 1) )
    return number;
    else
        return Fibonacci( number-1 ) + Fibonacci( number-2 );
}
