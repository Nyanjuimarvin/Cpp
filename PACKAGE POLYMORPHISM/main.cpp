#include <iostream>
#include<vector>
#include <iomanip>
#include "PACKAGE.h"
#include "TWO_DAY_PACKAGE.h"
#include "OVERNIGHT_PACKAGE.h"

using namespace std;


void VirtualViaPointer( const Package * const );
void VirtualViaReference( const Package & );

int main()
{

    OvernightPackage package_1( "JUMIA", "58678789779", "NAIROBI", "KENYA", "MARVIN", "+245739288525", "KABETE", "KENYA", 003 ,658, 6.75, 10.26);
    package_1.setAdditionalFee( 7.78 );


    TwoDayPackage package_2( "JUMIA", "58678789779", "NAIROBI", "KENYA", "MARVIN", "+245739288525", "KABETE", "KENYA", 003 ,658, 6.75, 10.26);
    package_2.setFlatFee( 6.8 );

    //PROCESS BY STATIC BINDING
    cout<<"\n\nPACKAGES PROCESSED BY STATIC BINDING"<<endl;
    cout<<fixed<<setprecision(2);
    package_1.print();
    package_2.print();

    //SET UP A VECTOR TO STORE POINTERS
    vector< Package * >packages(2);

    //INITIALIZE VECTOR
    packages[0]=&package_1;
    packages[1]=&package_2;

    //dynamic binding

    cout<<"\n\nPROCESS BY DYNAMIC BINDING:\n\n";

    cout<<"CALL BY POINTERS:\n"<<endl;

    for( const Package *packagePtr : packages )
        VirtualViaPointer( packagePtr );

    cout<<"\n\nCALL BY REFERENCES:";

    for( const Package *packagePtr : packages )
        VirtualViaReference( *packagePtr );


    return 0;
}

void VirtualViaPointer( const Package * const baseClassPtr )
{
   baseClassPtr->print();
}

void VirtualViaReference( const Package &baseClassRef )
{
    baseClassRef.print();
}
