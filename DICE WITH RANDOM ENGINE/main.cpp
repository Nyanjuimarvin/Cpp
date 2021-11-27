//A COMMON DICE GAME CALLED CRAPS ROLL 7 OR 11 FIRST::WIN; ROLL 2,3,12 FIRST::LOSE; IF NONE IS ROLLED ROLL TILL YOU GET POINTS EQUAL TO FIRST ROLL YOU LOSE IF 7 IS ROLLED
#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>//CONTAINS PROTOTYPE FOR TIME FUNCTION

using namespace std;


int main()
{
    enum Status{CONTINUE, WON, LOST};//ENUM TO SHOW GAME STATUS
//FUNCTION TIME RETURNS RETURNS CURRENT TIME
//STATIC CAST ELIMINATES COMPILER WARNING WHEN TRYING TO PASS A TIME_T TO AN UNSIGNED INT
    default_random_engine engine( static_cast< unsigned int >(time(0)));
    uniform_int_distribution< unsigned int > randomInt( 1 , 6 );

    unsigned int myPoint=0;//POINTS THE PLAYER HAS :: INITIALIZED TO ZERO
    Status gameStatus =CONTINUE;
    unsigned int die1= randomInt( engine );
    unsigned int die2= randomInt( engine );
    unsigned int sumOfDice=die1 + die2;
    unsigned int roll=sumOfDice;

    switch( sumOfDice )
    {
    case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"YOUR POINT IS "<<myPoint<<endl;
        break;
    }

    while ( CONTINUE==gameStatus)
    {
        sumOfDice=roll;

        if( sumOfDice==myPoint)
            gameStatus=WON;
            else
                if(sumOfDice==7)
                gameStatus=LOST;
    }

    if(WON==gameStatus)
        cout<<"YOU WIN"<<endl;
    else
        cout<<"YOU LOSE"<<endl;
    return 0;
}

