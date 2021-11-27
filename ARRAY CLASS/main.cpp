#include <iostream>
#include <stdexcept>
#include "ARRAY.h"

using namespace std;

int main()
{
    Array integers1( 7 );
    Array integers2;//10 ELEMENTS BY DEFAULT

    //PRINT INTEGERS1 SIZE AND CONTENTS

    cout << "SIZE OF ARRAY INTEGERS1 IS: " <<integers1.getsize()
         << "\nARRAY AFTER INITIALIZATION IS:\n" << integers1;


    //PRINT INTEGERS2 SIZE AND CONTENTS
    cout << "\nSIZE OF ARRAY INTEGERS2 IS: " <<integers2.getsize()
         << "\nVECTOR AFTER INITIALIZATION IS:\n" << integers2;


    //INPUT AND PRINT INTEGERS1 AND INTEGERS2

    cout << "\nINPUT 17 INTEGERS: " <<endl;
    cin >> integers1 >> integers2;

    cout<< "\nAFTER INPUT THE ARRAYS CONTAIN:\n"
        << "INTEGERS1:\n" << integers1
        << "INTEGERS2:\n" << integers2;

    //USE OVERLOADED INEQUALITY OPERATOR (!= )

    cout << "\nEVALUATING INTEGERS1 != INTEGERS2" << endl;

    if( integers1 != integers2 )
        cout << "INTEGERS1 AND INTEGERS2 ARE NOT EQUAL" << endl;

    //CREATE ARRAY INTEGERS3 USING INTEGERS1 AS AN INITIALIZER AND PRINT OUT CONTENTS
    Array integers3(integers1);//INVOKES COPY CONSTRUCTOR

    cout << "SIZE OF ARRAY INTEGERS3 IS: "
         <<integers3.getsize()
         << "\nARRAY AFTER INITIALIZATION:\n" << integers3;


    //USE OVERLOADED(=)ASSIGNMENT OPERATOR
    cout << "\nASSIGNING INTEGERS2 TO INTEGERS1:" << endl;
         integers1=integers2;//NOTE TARGET ARRAY IS SMALLER

    cout << "INTEGERS1:\n" << integers1;
    cout << "INTEGERS2:\n" << integers2;

    //USE OVERLOADED EQUALITY ( == ) OPERATOR
    cout << "\nEVALUATING: INTEGERS1 == INTEGERS2 " << endl;

    if( integers1 == integers2 )
        cout << "INTEGERS1 AND INTEGERS2 ARE EQUAL" << endl;


    //USE OVERLOADED SUBSCRIPT OPERATOR TO CREATE RVALUE
    cout << "\nINTEGERS[5] is" << integers1[5];

    //USE OVERLOADED SUBSCRIPT OPERATOR  TO CREATE LVALUE

    cout << "\n\nASSIGNING 1000 TO INTEGERS[5]" << endl;
    integers1[5] = 1000;
    cout << "INTEGERS1:\n" << integers1;

    //ATTEMPT TO USE OUT OF RANGE SUBSCRIPT

    try
    {
        cout << "\nATTEMPT TO DISPLAY INTEGERS1.AT[15]" << endl;
          integers1[15] = 1000;//ERROR :SUBSCRIPT OUT OF RANGE
    }//END TRY

    catch( out_of_range &ex )
    {
        cerr << "AN EXCEPTION OCCURRED: " << ex.what() << endl;
    }
}
