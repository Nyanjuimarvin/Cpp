#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    const size_t arraySize = 7;
     array< string, arraySize > colors =
     {"Red", "Orange","Yellow","Green", "Blue", "Indigo","Violet"};

     cout << "UNSORTED ARRAY:\n";
     for( string color : colors )
        cout << color << " ";

     sort( colors.begin(), colors.end() );

     cout << "\nSORTED ARRAY:\n";
     for( string item : colors )
        cout << item << " ";

     //SEARCH FOR INDIGO WITH FUNC BINARY SEARCH

     bool found = binary_search( colors.begin(), colors.end(), "Indigo" );
     cout << "\n\n\"INDIGO\" " << (found ? "WAS" : "WAS NOT")
     << " FOUND IN COLORS" << endl;

     found = binary_search ( colors.begin(), colors.end(), "Cyan" );
     cout << "\"CYAN\" " << ( found ? "WAS" : "WAS NOT")
     << " FOUND IN COLORS " << endl;
    return 0;
}
