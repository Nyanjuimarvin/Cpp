#include <iostream>
#include<iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( static_cast< unsigned int >( time(0)));

    for( unsigned int counter; counter<=20; ++counter)
    {
        cout<<setw( 15 )<<1+rand()%6;

        if( counter % 5==0)
            cout<<endl;
    }
    return 0;
}
