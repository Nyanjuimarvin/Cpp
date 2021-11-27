#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    static const size_t Arraysize = 15;
    array< int , Arraysize >M=
    {12,33,55,77,22,23,5,43,5,56,7,767,676,7,66};

    cout << "ARRAY BEFORE SORTING:"<<endl;

    for( int i = 0; i < M.size(); ++i )
    {
        cout << M[i] << " , ";
    }

    sort( M.begin(), M.end());
    cout << "\n\nARRAY AFTER SORTING:\n" << endl;

    for( int m : M )
        cout << m << " , ";

    bool found = binary_search( M.begin() , M.end(),56 );
    cout << "\n\n56 " << ( found ? "WAS" : "WAS NOT" )
    << " FOUND IN THE ARRAY"<< endl;

    cout << "\n\nARRAY IN DESCENDING ORDER:" << endl;

    sort( M.begin(), M.end(), greater< int >() );
    for( int f : M )
        cout << f << " , ";

    return 0;
}
