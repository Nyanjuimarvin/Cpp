#include <iostream>
#include "DATE.h"

using namespace std;

int main()
{
    Date d1( 12, 27, 2010 );
    Date d2;

    cout << "D1 is " << d1
         << "\nD2 IS " << d2
         << "\nD1 +=10 IS " << ( d1 +=10);

    d2.setdate( 2, 28, 2008 );
    cout << "\n\nd2 IS " << d2
         << "\n++d2 IS " << ++d2;

    Date d3 ( 7, 13, 2010 );

    cout << "\n\nTESTING THE PREFIX INCREMENT OPERATOR:\n"
         << "d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << "d3 is " << d3;



    cout << "\n\nTESTING THE POSTFIX INCREMENT OPERATOR:\n"
         << "d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << "d3 is " << d3;
    return 0;
}
