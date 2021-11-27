#include <iostream>
#include <stdexcept>
#include "TIME.h"

using namespace std;

int main()
{
    Time t;
    cout << "INITIAL UNIVERSAL TIME IS: ";
    t.printUniversal();
    cout << "\n\nINITIAL STANDARD TIME IS: ";
    t.printStandard();

    t.setTime( 12, 31, 23 );

    cout << "\n\nUNIVERSAL TIME AFTER SET IS: ";
    t.printUniversal();
    cout << "\n\nSTANDARD TIME AFTER SET IS: ";
    t.printStandard();

    cout << "\n\nATTEMPT TO SET TIME AS 99:99:99" << endl;

    try
    {
        t.setTime( 99, 99, 99 );
    }
    catch( invalid_argument &e )
    {
        cerr << "\n\nEXCEPTION: " << e.what() << endl;
    }

    cout << "\n\nNEW UNIVERSAL TIME AFTER ERROR: ";
    t.printUniversal();
    cout << "\n\nNEW STANDARD TIME AFTER ERROR: ";
    t.printStandard();
    return 0;
}
