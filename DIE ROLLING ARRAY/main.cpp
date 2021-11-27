#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    default_random_engine engine( static_cast< unsigned int >( time(0) ));
    uniform_int_distribution< unsigned int >randomInt( 1, 6 );


    const size_t arraysize = 7;
    array< unsigned int, arraysize >Frequency = {};

    for( unsigned int roll=1; roll<=6000000; ++roll )
        ++Frequency[ randomInt( engine )];
    cout<<"FACE"<<setw( 13 )<<"FREQUENCY"<<endl;

    for( size_t face=1; face<Frequency.size(); ++face )
    cout<<setw( 4 )<<face<<setw( 14 )<<Frequency[face]<<endl;

    return 0;
}
