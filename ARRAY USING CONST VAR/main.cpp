#include <iostream>
#include<iomanip>
#include<array>
#include<cstddef>

using namespace std;

int main()
{
    const size_t arraySize=7;//initialize constant variable

    array<int, arraySize>P;//arraySize replaces int

    //my example will print integers that're a multiple of 2

    for(size_t i=0;i<P.size();i++)
        P[i]=2 + 2 * i;//tis will set the values

    cout<<"ELEMENT"<<setw(20)<<"VALUE"<<endl;

    for(size_t j=0;j<P.size();j++)
        cout<<setw(10)<<j<<setw(10)<<P[j]<<endl;
    return 0;
}
