#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED


#include <string>

//NAME,NAME,ADDRESS, ADDRESS ,CITY  CITY,STATE, STATE, ZIP1, ZIP2
class Package
{
public:
    //CONSTRUCTOR
     Package( const std::string &, const std::string &, const std::string &, const std::string &,
               const std::string &,const std::string &, const std::string &, const std::string &, double=0.0, double=0.0, double=0.0, double=0.0);


     virtual~Package(){};


     void setCompanyName( const std::string & );
     std::string getCompanyName()const;

     void setCompanyAddress( const std::string & );
     std::string getCompanyAddress()const;

     void setCompanyCity( const std::string & );
     std::string getCompanyCity()const;

     void setCompanyState( const std::string & );
     std::string getCompanyState()const;

     void setCompanyZipCode( double );
     double getCompanyZipCode()const;


     void setRecipientName( const std::string & );
     std::string getRecipientName()const;

     void setRecipientAddress( const std::string & );
     std::string getRecipientAddress()const;

     void setRecipientCity( const std::string & );
     std::string getRecipientCity()const;

     void setRecipientState( const std::string & );
     std::string getRecipientState()const;

     void setRecipientZipCode( double );
     double getRecipientZipCode()const;

     void setPackageWeight( double );
     double getPackageWeight()const;

     void setCostPerKg( double );
     double getCostPerKg()const;

     virtual void print()const;
     virtual double CalculateCost()const=0;

private:
    std::string companyName;
    std::string companyAddress;
    std::string companyCity;
    std::string companyState;
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;

    double companyZipCode;
    double recipientZipCode;
    double packageWeight;
    double costPerKg;
};


#endif

