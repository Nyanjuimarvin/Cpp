#include <iostream>
#include <array>

using namespace std;

int main()
{
    int bv[12]{12,45,78,74,862,622,215,122,4,23,3,54};

    cout << "UNSORTED ARRAY: "<< endl;

    for( int i = 0 ; i < bv.size(); ++i )
    {
        cout << "i" << bv[i];
    }
    return 0;
}
