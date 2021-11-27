#ifndef TWO_DAY_PACKAGE_H_INCLUDED
#define TWO_DAY_PACKAGE_H_INCLUDED

#include <string>
#include "PACKAGE.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage( const std::string &, const std::string &, const std::string &, const std::string &,
               const std::string &,const std::string &, const std::string &, const std::string &, double=0.0, double=0.0 , double=0.0, double=0.0, double=0.0 );



    void setFlatFee( double );
    double getFlatFee()const;

    void print()const;
    double CalculateCost()const;

private:
    double flatFee;

};


#endif
