#include <iostream>
#include<iomanip>
#include<cstddef>
#include<array>

using namespace std;

int main()
{
    array<int,7>M={21,13,34,76,86,67,87};

    cout<<"ELEMENT"<<setw(15)<<"VALUE"<<endl;

    for(size_t i=0;i<M.size();i++)
    cout<<setw(10)<<i<<setw(10)<<M[i]<<endl;
    return 0;
}
