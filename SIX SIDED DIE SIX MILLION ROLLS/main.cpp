#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int frequency1=0;//COUNTS OF 1 ROLLED
    unsigned int frequency2=0;//          2 ROLLED
    unsigned int frequency3=0;//          3 ROLLED
    unsigned int frequency4=0;//          4 ROLLED
    unsigned int frequency5=0;//          5 ROLLED
    unsigned int frequency6=0;//          6 ROLLED

    for( unsigned int roll=0; roll <= 6000000; ++roll)//ROLLS DIE 6MILLION TIMES
    {
        unsigned int face= 1 + rand() % 6;//RANDOM NUM FROM 1 TO 6



        switch( face )
        {
        case 1:
            ++frequency1;//INCREASE OCCURRENCE OF FACE 1
            break;
        case 2:
            ++frequency2;//FACE2
                break;
        case 3:
            ++frequency3;
            break;
        case 4:
            ++frequency4;
            break;
        case 5:
            ++frequency5;
            break;
        case 6:
            ++frequency6;
            break;
        default:
            cout<<"WHAT YOU DOIN!"<<endl;
        }
    }

    cout<<"FACE"<<setw( 15)<<" FREQUENCY"<<endl;
    cout<<" 1"  <<setw( 15 )<<frequency1
        <<"\n 2"<<setw( 15 )<<frequency2
        <<"\n 3"<<setw( 15 )<<frequency3
        <<"\n 4"<<setw( 15 )<<frequency4
        <<"\n 5"<<setw( 15 )<<frequency5
        <<"\n 6"<<setw( 15 )<<frequency6<<endl;
    return 0;
}
