#include <iostream>
#include<iomanip>
#include<cstddef>

using namespace std;

int main()
{

    array<int,15>Bc;//ARRAY SPECIFICATIONS

    //INITIALIZE ELEMENTS OF ARRAY Bc TO ZERO
    for(size_t i=0;i<Bc.size();i++)
    Bc[i]=0;//SET ELEMENT AT LOCATION i TO 0
        cout<<"ELEMENT"<<setw(20)<<"VALUE"<<endl;

        //OUTPUT EACH ELEMENTS VALUE
    for(size_t j=0;j<Bc.size();j++)
        cout<<setw(10)<<j<<setw(10)<<Bc[j]<<endl;
    return 0;
}
