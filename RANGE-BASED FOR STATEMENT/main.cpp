#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array< int, 5 >items = {1,2,3,4,5};

    cout << "ITEMS BEFORE MODIFICATION: ";
    for( int item : items )
        cout << item << " ";

    for( int &itemRef : items )//MULTIPLY ELEMENTS OF ITEMS BY 2
        itemRef *=2;

    cout << "\n\nITEMS AFTER MODIFICATION: ";
    for( int item : items )
        cout << item << " ";
    cout<<endl;
    return 0;
}
