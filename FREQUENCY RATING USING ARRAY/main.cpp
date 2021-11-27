#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    //DEFINE THE ARRAY SIZES
    const size_t Rating = 20;
    const size_t Rates = 6;

//PLACE THE RESPONSES IN AN ARRAY
    array< unsigned int, Rating>Responses={ 1,2,5,3,2,5,2,1,2,1,5,3,4,2,3,5,4,2,3,4,};

//INITIALIZE FREQUENCY OF RESPONSES TO 0
    array< unsigned int, Rates >Frequency={};

//TAKES DATA FEOM ARRAY RESPONSES AND INCREMENTS USING THE FREQUENCY COUNTERS
    for( size_t answer=0; answer<Responses.size();++answer)
        ++Frequency[ Responses[answer] ];//INCREMENTS APPROPRIATE FREQUENCY COUNTER DEPENDING ON VCALUE OF RESPONSES[ANSWER]

    cout<<"RATING"<<setw( 13 )<< "FREQUENCY"<<endl;

    for( size_t rating=1;rating<Frequency.size(); ++rating )
        cout<<setw(5)<<rating<<setw(15)<<Frequency[rating]<<endl;

    return 0;
}
