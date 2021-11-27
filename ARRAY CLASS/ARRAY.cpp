#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "ARRAY.h"
using namespace std;

Array::Array( int ArraySize )
:size ( ArraySize > 0 ? ArraySize :
       throw invalid_argument( "ARRAY SIZE N=MUST BE > 0")),
       Ptr( new int[size] )

     {
       for( size_t i = 0; i < size; ++i )
         Ptr[i]= 0;//SET POINTER BASED ARRAY ELEMENT
     }

//COPY CONSTRUCTOR FOR CLASS ARRAY
//MUST RECEIVE A REFERENCE TO AN ARRAY

Array::Array( const Array &arrayToCopy )
:size( arrayToCopy.size ),
 Ptr(new int[size])

   {
 for( size_t i = 0; i < size; ++i )
     Ptr[i]=arrayToCopy.Ptr[i];//COPY INTO OBJECT
   }



 Array::~Array()
 {
     delete [] Ptr;//RELEASE POINTER BASED ARRAY SPACE
 }

 size_t Array::getsize()const//RETURN NO OF ELEMENTS OF ARRAY
 {
     return size;//NO OF ELEMENTDS IN ARRAY
 }

 //OVERLOADED ASSIGNMENT OPERATOR
 //CONST RETURN AVOIDS (A1 = A2 )= A3
 const Array &Array::operator=( const Array &right )
 {
     if( &right != this )//AVOID SELF ASSIGNMENT
     {
       // for Arrays of different sizes, deallocate original
       // left-side Array, then allocate new left-side Array

       if( size != right.size )
       {
           delete [] Ptr;//RELEASE SPACE
           size = right.size;//RESIZE OBJECT
           Ptr= new int [size];//CREATE SPACE FOR ARRAY COPY
       }

       for( size_t i = 0; i < size; ++i )
       {
           Ptr[i] = right.Ptr[i];
       }
     }

    return *this;//ENABLES CASCADING E.G X=Y=Z
 }


 // determine if two Arrays are equal and
 // return true, otherwise return false

 bool Array::operator==( const Array &right )const
 {
     if( size != right.size )
        return false;//arrays of different no of elements

     for( size_t i = 0; i < size ; ++i )
        if( Ptr[i] != right.Ptr[i] )
        return false;//ARRAY CONTENTS NOT EQUAL

     return true;
 }


// overloaded subscript operator for non-const Arrays;
// reference return creates a modifiable lvalue

int &Array::operator[](int subscript)
{
    //CHECK FOR SUBSCRIPT OUT OF RANGE ERROR

    if( subscript < 0 || subscript >= size )
        throw out_of_range( "SUBSCRIPT IS OUT OF RANGE" );

    return Ptr[subscript];//REFERENCE RETURN
}


// overloaded subscript operator for const Arrays
// const reference return creates an rvalue

int Array::operator[]( int subscript )const
{
    //CHECK FOR OUT OF RANGE SUBSCRIPT

     if( subscript < 0 || subscript >= size )
        throw out_of_range( "SUBSCRIPT IS OUT OF RANGE" );

    return Ptr[subscript];//RETURNS COPY OF THIS ELEMENT
}

// overloaded input operator for class Array;
// inputs values for entire Array

istream &operator>>( istream &input, Array &a )
{
   for( size_t i = 0; i< a.size; ++i )
        input >> a.Ptr[i];

   return input;
}


//OVERLOADED OUTPUT OPERATOR FOR CLASS ARRAY

ostream &operator<<( ostream &output, const Array &a )
{
     //OUTPUT PRIVATE PTR BASED ARRAY
    for( size_t i = 0; i < a.size; ++i )
    {
        output << setw(12) << a.Ptr[i];

        if((i + 1)% 4 == 0 )//4 ELEMENTS OUTPUT PER ROW
            output << endl;
    }

    if( a.size % 4 != 0 )//END LAST LINE OF OUTPUT
        output << endl;

    return output;
}

