#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    const size_t arraysize = 11;
    array < unsigned int, arraysize>M={0, 2, 2, 3, 2 , 5, 6, 8, 10, 11, 1};


    cout<<"GRADE DISTRIBUTION:"<<endl;


    for( unsigned int i=0; i<M.size(); ++i )
    {

        if(i==0)
            cout<<" 0-9";
        else if(i==10)
        cout<<"100";

        else
            cout<<i*10<<"-"<<(i*10)+9;

        for( unsigned int stars=0; stars<M[i]; ++stars)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
