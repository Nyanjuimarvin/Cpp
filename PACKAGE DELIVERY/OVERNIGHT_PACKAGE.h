#ifndef OVERNIGHT_PACKAGE_H_INCLUDED
#define OVERNIGHT_PACKAGE_H_INCLUDED


#include <string>
#include "PACKAGE.h"

class OvernightPackage : public Package
{
public:

    OvernightPackage( const std::string &, const std::string &, const std::string &, const std::string &,
               const std::string &,const std::string &, const std::string &, const std::string &, double=0.0, double=0.0, double=0.0, double=0.0, double=0.0 );

    void setAdditionalFee(double);
    double getAdditionalFee()const;
    void print()const;
    double CalculateCost()const;

private:
    double additionalFee;

};


#endif
