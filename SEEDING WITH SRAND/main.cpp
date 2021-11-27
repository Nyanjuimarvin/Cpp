#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int seed=0;

    cout<<"ENTER SEED: ";
    cin>>seed;
    srand(seed);//SEED RANDOM NUMBER GENERATOR

    for( unsigned int counter=0; counter<=20; ++counter)
    {
        cout<<setw(10)<<( 1+rand()%6);

        if(counter%5==0)
            cout<<endl;
    }
}
