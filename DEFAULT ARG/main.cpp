#include <iostream>
#include <iomanip>
#include "TIME.h"

using namespace std;

int main()
{
    Time t1;
    Time t2( 2 );
    Time t3( 12,12,34);
    Time t4{23,56,54};

    int derf{23};//EXAMPLE OF LIST INITIALIZER

    cout << "T1:" << endl;
    t1.printStandard();
    t1.printUniversal();

    cout << "T2" << endl;
    t2.printStandard();
    t2.printUniversal();

    cout << "T3" << endl;
    t3.printStandard();
    t3.printUniversal();

    cout << "T4" << endl;
    t4.printStandard();
    t4.printUniversal();

    return 0;
}
