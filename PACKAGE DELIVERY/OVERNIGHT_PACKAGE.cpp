#include <iostream>
#include <stdexcept>
#include "OVERNIGHT_PACKAGE.h"

using namespace std;

OvernightPackage::OvernightPackage( const string &Name_1, const string &Address_1, const string &City_1, const string &State_1,
               const string &Name_2,const string &Address_2, const string &City_2, const string &State_2, double Zip_1, double Zip_2, double Weight, double Cost, double Fee )

:Package( Name_1, Address_1,City_1, State_1, Name_2, Address_2, City_2, State_2, Zip_1, Zip_2, Weight, Cost)
{
    setAdditionalFee( Fee );
}

void OvernightPackage::setAdditionalFee( double Fee )
{
    if( Fee>0 )
        additionalFee=Fee;
}

double OvernightPackage::getAdditionalFee()const
{
    return additionalFee;
}

double OvernightPackage::CalculateCost()const
{
    return ( getAdditionalFee() + getCostPerKg() ) * getPackageWeight();
}

void OvernightPackage::print()const
{
    cout<<"\n\n\nOVERNIGHT PACKAGE"<<endl;
    Package::print();
    cout<<"\nADDITIONAL FEE FOR AN OVERNIGHT PACKAGE IS: "<<getAdditionalFee()<<endl;
    cout<<"SHIPPING COST FOR AN OVERNIGHT PACKAGE IS: "<<CalculateCost()<<endl;
}
