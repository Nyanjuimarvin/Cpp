//STATIC ARRAY INITIALIZATION AND AUTOMATIC ARRAY INITIALIZATION
#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void StaticArray();
void AutomaticArray();
const size_t arraysize = 3;

int main()
{
    cout<<"FIRST CALL TO EACH FUNCTION: \n";
    StaticArray();
    AutomaticArray();

    cout<<"\n\nSECOND CALL TO EACH FUNCTION: \n";
    StaticArray();
    AutomaticArray();
    cout<<endl;
    return 0;
}

//DEFINE STATIC LOCAL ARRAY
void StaticArray( void )
{
   static array< int, arraysize >array1;//STATIC LOCAL ARRAY
   cout<<"VALUES ON ENTERING STATIC ARRAY:\n";

   //OUTPUT VALUES OF ARRAY 1
   for( size_t i = 0; i < array1.size(); ++i )
        cout << "ARRAY1[" << i << "] = " << array1[i] << " ";
   cout<<"\n\nVALUES ON EXITING STATIC ARRAY:\n";

//MODIFY AND OUTPUT THE CONTENTS OF ARRAY 1
   for( size_t j = 0; j < array1.size(); ++j )
   cout << "ARRAY1[" << j << "] = " << ( array1[ j ] +=5 )<<" ";
}

void AutomaticArray( void )
{
    array< int, arraysize >array2 = {1,2,3};//AUTOMATIC LOCAL ARRAY

    cout << "\n\nVALUES ON ENTERING AUTOMATIC ARRAY:\n";

    for( size_t i = 0; i < array2.size(); ++i )
        cout << "ARRAY2[" << i << "] = " << array2[ i ] << " ";

    cout << "\nVALUES ON EXITING AUTOMATIC ARRAY:\n";

    for( size_t j = 0; j < array2.size(); ++j )
        cout << "ARRAY2[" << j << "] = " << ( array2[ j ]+=5 ) << " ";
}
