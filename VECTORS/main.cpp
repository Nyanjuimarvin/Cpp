#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void outputVector( const vector< int > & );//DISPLAYS VECTOR
void inputVector ( vector< int > & );//INPUT VALUES INTO VECTOR

int main()
{
    vector< int >integers1( 7 );
    vector< int >integers2 ( 10 );

    //PRINT INTEGERS1 SIZE AND CONTENTS

    cout<<"SIZE OF VECTOR INTEGERS1 IS: "<<integers1.size()
        <<"\n\nVECTOR AFTER INITIALIZATION IS: "<<endl;
        outputVector( integers1 );

    cout<<"\nSIZE OF VECTOR INTEGERS2 IS: "<<integers2.size()
        <<"\n\nVECTOR AFTER INITIALIZATION IS: "<<endl;
        outputVector( integers2 );


    //INPUT AND PRINT INTEGERS1 AND INTEGERS2

    cout<<"\nINPUT 17 INTEGERS: "<<endl;
    inputVector( integers1 );
    inputVector( integers2 );

    cout<<"\nAFTER INPUT THE VECTORS CONTAIN:\n"
    <<"INTEGERS1: "<<endl;
    outputVector( integers1 );
    cout<<"INTEGERS2:"<<endl;
    outputVector( integers2 );

    //USE INEQUALITY OPERATOR WITH VECTOR OBJECTS(!=)1

    cout<<"EVALUATING INTEGERS1 != INTEGERS2"<<endl;

    if( integers1 != integers2 )
        cout<<"INTEGERS1 AND INTEGERS2 ARE NOT EQUAL"<<endl;

    //CREATE VECTOR INTEGERS3 USING INTEGERS1 AS AN INITIALIZER AND PRINT OUT CONTENTS
    vector< int >integers3(integers1);// COPY CONSTRUCTOR

    cout<<"SIZE OF INTEGERS3 IS: "<<integers3.size()
        <<"\nVECTOR AFTER INITIALIZATION:"<<endl;
    outputVector(integers3);

    //USE OVERLOADED(=)ASSIGNMENT OPERATOR
    cout<<"ASSIGNING INTEGERS2 TO INTEGERS1: "<<endl;
    integers1=integers2;//ASSIGN INTEGERS2 TO INTEGERS1

    cout<<"INTEGERS1:"<<endl;
    outputVector(integers1);
    cout<<"INTEGERS2:"<<endl;
    outputVector(integers2);

    //USE EQUALITY ( == ) OPERSTOR WITH VECTOR OBJECTS
    cout<<"\nEVALUATING: INTEGERS1 == INTEGERS2 "<<endl;

    if( integers1 == integers2 )
        cout<<"INTEGERS1 AND INTEGERS2 ARE EQUAL"<<endl;


    //USE SQUARE BRACKETS TO USE THE VALUE AT LOCATION 5 AS AN RVALUE
    cout<<"\nINTEGERS[5] is"<<integers1[5];

    //USE SQUARE BRACKETS TO CREATE LVALUE

    cout<<"\n\nASSIGNING 1000 TO INTEGERS[5]"<<endl;
    integers1[5]=1000;
    cout<<"INTEGERS1:"<<endl;
    outputVector(integers1);

    //ATTEMPT TO USE OUT OF RANGE SUBSCRIPT

    try
    {
        cout<<"\nATTEMPT TO DISPLAY INTEGERS1.AT[15]"<<endl;
        cout<<integers1.at( 15 )<<endl;//OUT OF RANGE
    }//END TRY

    catch( out_of_range &ex )
    {
        cerr<<"AN EXCEPTION OCCURRED: "<<ex.what()<<endl;
    }

    //CHANGING SIZE OF VECTOR

    cout<<"\nCURRENT INTEGERS3 SIZE IS: "<<integers3.size()<<endl;
    integers3.push_back( 1000 );//ADD 1000 AT END OF VECTOR
    cout<<"NEW INTEGERS3 SIZE IS: "<<integers3.size()<<endl;
    cout<<"INTEGERS3 NOW CONTAINS: ";
    outputVector(integers3);
}


//OUTPUTVECTOR CONTENTS
void outputVector(const vector< int > &array)
{

    for( int item : array )
        cout << item <<" ";

    cout << endl;
}

//INPUTVECTOR CONTENTS

void inputVector( vector< int > &array)
{
    for( int &item : array )
        cin >> item;
}
