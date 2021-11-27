#include <iostream>

using namespace std;

union Points{
double x,y;
};

typedef unsigned char Byte;

enum stream{
    SOUTH,
    NORTH,
    EAST,
    WEST};

int main()
{

 Byte b1,b2,b3,b4;
 b1='A';
 b2='B';
 b3='C';
 b4='D';

 enum stream cardinal;
 cardinal=WEST;

 cout<<"B1:"<<b1<<endl;
 cout<<cardinal<<endl;
    return 0;
}
