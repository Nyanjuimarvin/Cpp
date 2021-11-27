#include <iostream>
#include <iomanip>
#include <array>
//SYNTAX: ARRAY< ARRAY< TYPE ,SIZE >,SIZE >ARRAYNAME;
using namespace std;

const size_t rows = 2;
const size_t columns = 3;
void printArray( const array< array< int, columns>, rows > & );//PRINTS OUT THE 2D ARRAY
void printARRAY( const array< array< int, columns> ,rows > & );

int main()
{
    array< array< int, columns>,rows> array1 = {1,2,3,4,5,6};
    array< array< int, columns>,rows> array2 = {1,2,3,4,5};

    cout << "VALUES IN array1 BY ROW ARE: " << endl;
    printArray( array1 );

    cout << "\nVALUES IN array2 BY ROW ARE: "<< endl;
    printArray( array2 );

    cout << "ARRAY PRINTED BY COUNTER CONTROLLED REPETITION:" << endl;
    printARRAY( array1 );

    return 0;
}
//FUNCTION DEFINITION FOR PRINTARRAY
void printArray( const array < array< int, columns>, rows> & a)
{
    //LOOP FOR ROWS
    //CONST& MEANS THE REFERENCE CANT BE USED TO MODIFY THE ROWS
    //ALSO PREVENTS EACH ROW FROM BEING COPIED INTO THE RANGE VAR
    for( auto const &row : a )//ITERATE THROUGH ROWS
    {
        //LOOP FOR COLUMNS
        //RANGE VAR ELEMENT IS INITIALIZED WITH ONE ELEMENT OF THE ARRAY REPRESENTED BY ROW
        //THUS COMPILER INFERS THAT ELEMENT REFERS TO AN INT
        for( auto const &element : row )//ITERATE THROUGH COLUMNS
            cout << element << ' ';
        cout << endl;
    }
}
//AUTO TELLS THE COMPILER TO INFER(DETERMINE) A VARIABLE'S DATA TYPE ON THE VARIABLE'S INITIALIZER VALUE


//COUNTER CONTROLLED FOR STATEMENT
void printARRAY( const array< array< int, columns>, rows > & a )
{
    for( size_t row = 0; row < a.size(); ++row )
    {
        for(size_t column; column < a[ row ].size(); ++column )
            cout << a[row][column]<< ' ';
        cout << endl;
    }
}
