#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    //LOOP 20 TIMES
    //THE TYPE MUST BE UNSIGNED
    //USE COUNTER CONTROLLED REPETITION
    for(unsigned int counter =1; counter<=20; ++counter)
    {
        cout<<setw(5)<<(1+rand()%6);//(RAND()%6 IS SCALING WHERE 6 IS THE SCALING FACTOR..WE ADD 1 TI SCALE TOSHIFT RANGE OF NUMS PRODUCED

    if( counter % 5==0 )//ONCE 5 NUMBERS ARE GENERATED START A NEW LINE OF INPUT
        cout<<endl;
    }//PRODUCES SHIFTED SCALED INTEGERS PRODUCED BY 1+RAND()%6
    return 0;
}
