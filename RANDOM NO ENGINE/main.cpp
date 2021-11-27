//USING RANDOM NO ENGINE AND UNIFORM DISTRIBUTION
#include <iostream>
#include <iomanip>
#include <random>//CONTAINS RANDOM NO GENERATION FEATURES
#include <ctime>

using namespace std;

int main()
{
     //DEFAULT NO ENGINE THAT PRODUCES UNIFORMLY DISTRIBUTED  PSEUDORANDOM NO FROM 1 TO 6
    default_random_engine engine(static_cast< unsigned int >( time(0)));
    uniform_int_distribution< unsigned int > randomInt( 1,6 );//CLASS TEMPLATE

    for( unsigned int counter; counter <= 10; ++counter)
    {
        cout << setw( 10 )<<randomInt( engine );//PICK A RANDOM NO AND OUTPUT IT

    if( counter % 5 == 0)
        cout<<endl;
    }
    return 0;
}
