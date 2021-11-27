#include <iostream>
#include<iomanip>
#include<array>
#include<cstddef>

using namespace std;

int main()
{
    const size_t arraySize=10;
    array<int,arraySize>K={13,67,89,98,76,56,47,54,34,72};
    int total=0;

    for(size_t i=0;i<K.size();i++)
        total += K[i];//the total equals the sum of all elements in array K

    cout<<"SUM OF ELEMENTS IS: "<<total<<endl;
    return 0;
}
