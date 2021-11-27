#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include <iostream>

class Array
 {
    friend std::ostream &operator<<( std::ostream &, const Array & );
    friend std::istream &operator>>( std::istream &, Array & );

public:
    explicit Array ( int = 10 );//DEFAULT CONSTRUCTOR
    Array( const Array & );//COPY CONSTRUCTOR
    ~Array();//DESTR
    size_t getsize()const;

    const Array &operator = ( const Array & );//ASSIGNMENT OPERATOR
    bool operator == ( const Array & )const;//EQUALITY OPERATOR

 //INEQUALITY OPERATOR
    bool operator !=( const Array &right )const
    {
        return !( *this==right );//INVOKES ARRAY::OPERATOR ==
    }

    int &operator[](int);//SUBSCRIPT OPERATOR FOR NON CONST OBJECTS ::returns modifiable lvalue

    int operator[](int)const;//SUBSCRIPT OPERATOR FOR CONST OBJECTS ::returns r value

private:
    size_t size;//POINTER BASED ARRAY SIZE
    int *Ptr;//POINTER TO FIRST ELEMENT OF ARRAY

};



#endif
