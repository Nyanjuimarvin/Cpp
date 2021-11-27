#include <iostream>
#include <stdexcept>
#include "TWO_DAY_PACKAGE.h"

using namespace std;

TwoDayPackage::TwoDayPackage( const string &Name_1, const string &Address_1, const string &City_1, const string &State_1,
                             const string &Name_2, const string &Address_2, const string &City_2, const string &State_2, double Zip_1 , double Zip_2, double Weight, double Cost, double Flat )

:Package( Name_1, Address_1, City_1, State_1, Name_2, Address_2, City_2, State_2, Zip_1 , Zip_2 , Weight, Cost )
{
     setFlatFee( Flat );
}

void TwoDayPackage::setFlatFee( double Flat )
{

    if(Flat>1)
        flatFee=Flat;

    try
    {
    Flat < 1;
    }
    catch( out_of_range &ex)
    {
        cerr<<ex.what()<<endl;
    }
}

double TwoDayPackage::getFlatFee()const
{
    return flatFee;
}


 double TwoDayPackage::CalculateCost()const
 {
     return ( getCostPerKg() * getPackageWeight() ) + getFlatFee();
 }

 void TwoDayPackage::print()const
 {
     cout<<"\n\nTWO DAY PACKAGE"<<endl;
     Package::print();
     cout<<"\nFLAT FEE FOR A TWO DAY PACKAGE IS: "<<getFlatFee()<<endl;
     cout<<"SHIPMENT COST OF A TWO DAY DELIVERY IS: "<<CalculateCost()<<" $";
 }
