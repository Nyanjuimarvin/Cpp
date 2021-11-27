#include <iostream>
#include <stdexcept>
#include "PACKAGE.h"


using namespace std;

Package::Package( const string &Name_1, const string &Address_1, const string & City_1, const string &State_1,
                   const string &Name_2, const string &Address_2, const string &City_2, const string &State_2, double Zip_1, double Zip_2, double Weight, double Cost)
 {
     companyName=Name_1;
     companyAddress=Address_1;
     companyCity=City_1;
     companyState=State_1;

     recipientName=Name_2;
     recipientAddress=Address_2;
     recipientCity=City_2;
     recipientState=State_2;

     setCompanyZipCode( Zip_1 );
     setRecipientZipCode( Zip_2 );
     setPackageWeight( Weight );
     setCostPerKg( Cost );
 }



 void Package::setCompanyName( const string &Name_1 )
 {
     companyName=Name_1;
 }

 string Package::getCompanyName()const
 {
     return companyName;
 }

 void Package::setCompanyAddress( const string &Address_1 )
 {
     companyAddress=Address_1;
 }

 string Package::getCompanyAddress()const
 {
     return companyAddress;
 }

 void Package::setCompanyCity( const string &City_1 )
 {
     companyCity=City_1;
 }

 string Package::getCompanyCity()const
 {
     return companyCity;
 }

 void Package::setCompanyState( const string &State_1 )
 {
     companyState=State_1;
 }

 string Package::getCompanyState()const
 {
     return companyState;
 }

 void Package::setCompanyZipCode( double Zip_1 )
 {
     if( Zip_1>0 && Zip_1<1000.0)

        companyZipCode=Zip_1;
 }

double Package::getCompanyZipCode()const
 {
     return companyZipCode;
 }


 void Package::setRecipientName( const string &Name_2 )
 {
     recipientName=Name_2;
 }

 string Package::getRecipientName()const
 {
     return recipientName;
 }

 void Package::setRecipientAddress( const string &Address_2 )
 {
     recipientAddress=Address_2;
 }

 string Package::getRecipientAddress()const
 {
     return recipientAddress;
 }

 void Package::setRecipientCity( const string &City_2 )
 {
     recipientCity=City_2;
 }

 string Package::getRecipientCity()const
 {
     return recipientCity;
 }

 void Package::setRecipientState( const string &State_2 )
 {
     recipientState=State_2;
 }

 string Package::getRecipientState()const
 {
     return recipientState;
 }

 void Package::setRecipientZipCode( double Zip_2 )
 {
     if( Zip_2>0.0 && Zip_2<1000.0)
     recipientZipCode=Zip_2;
 }

 double Package::getRecipientZipCode()const
 {
     return recipientZipCode;
 }

 void Package::setPackageWeight( double Weight)
 {
     if( Weight>=0.00099 )
     packageWeight=Weight;
 }

 double Package::getPackageWeight()const
 {
     return packageWeight;
 }

 void Package::setCostPerKg( double Cost )
 {
     if( Cost>0)
     costPerKg=Cost;
 }

 double Package::getCostPerKg()const
 {
     return costPerKg;
 }

 void Package::print()const
 {
     cout<<"COMPANY NAME: "<<getCompanyName()
     <<"\nCOMPANY ADDRESS: "<<getCompanyAddress()
     <<"\nCOMPANY CITY: "<<getCompanyCity()
     <<"\nCOMPANY STATE: "<<getCompanyState()
     <<"\nCOMPANY ZIP CODE: "<<getCompanyZipCode()
     <<"\n\nRECIPIENT NAME: "<<getRecipientName()
     <<"\nRECIPIENT ADDRESS: "<<getRecipientAddress()
     <<"\nRECIPIENT CITY: "<<getRecipientCity()
     <<"\nRECIPIENT STATE: "<<getRecipientState()
     <<"\nRECIPIENT ZIP CODE: "<<getRecipientZipCode()
     <<"\n\nPACKAGE WEIGHT: "<<getPackageWeight()
     <<"\nCOST PER KG: $"<<getCostPerKg();
 }

 double Package::CalculateCost()const
 {
     return getCostPerKg() * getPackageWeight();
 }
