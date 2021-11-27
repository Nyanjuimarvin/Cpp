#ifndef TWO_DAY_PACKAGE_H_INCLUDED
#define TWO_DAY_PACKAGE_H_INCLUDED



#include <string>
#include "PACKAGE.h"

class TwoDayPackage final : public Package
{
public:
    TwoDayPackage( const std::string &, const std::string &, const std::string &, const std::string &,
               const std::string &,const std::string &, const std::string &, const std::string &, double=0.0, double=0.0 , double=0.0, double=0.0, double=0.0 );


    virtual~TwoDayPackage(){};


    void setFlatFee( double );
    double getFlatFee()const;

    virtual void print()const override;
    virtual double CalculateCost()const override;

private:
    double flatFee;

};

#endif
