#include <iostream>
#include <iomanip>
#include "PACKAGE.h"
#include "TWO_DAY_PACKAGE.h"
#include "OVERNIGHT_PACKAGE.h"

using namespace std;

int main()
{
    Package package_1( "AMAZON", "23443-4444-33233", "LOS ANGELES", "CALIFORNIA", "RAKIM", "3433-444-3443", "MIAMI", "FLORIDA", 679.0 ,123.0, 6.75, 10.26);
    package_1.print();

    OvernightPackage package_2( "JUMIA", "58678789779", "NAIROBI", "KENYA", "MARVIN", "+245739288525", "KABETE", "KENYA", 003 ,658, 6.75, 10.26);
    package_2.setAdditionalFee( 4.34 );
    package_2.print();


    TwoDayPackage package_3( "JUMIA", "58678789779", "NAIROBI", "KENYA", "MARVIN", "+245739288525", "KABETE", "KENYA", 003 ,658, 6.75, 10.26);
    package_3.setFlatFee( 6.8 );
    package_3.print();

    return 0;
}
