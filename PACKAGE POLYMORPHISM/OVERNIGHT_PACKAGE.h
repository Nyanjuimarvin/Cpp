#ifndef OVERNIGHT_PACKAGE_H_INCLUDED
#define OVERNIGHT_PACKAGE_H_INCLUDED



#include <string>
#include "PACKAGE.h"

class OvernightPackage final : public Package//USING FINAL MAKES SURE THE CLASS IS NOT USED AS A BASE CLASS
{
public:

    OvernightPackage( const std::string &, const std::string &, const std::string &, const std::string &,
             const std::string &,const std::string &, const std::string &, const std::string &, double=0.0, double=0.0, double=0.0, double=0.0, double=0.0 );


    virtual~OvernightPackage(){};

    void setAdditionalFee(double);
    double getAdditionalFee()const;
    virtual void print()const override;
    virtual double CalculateCost()const override;

private:
    double additionalFee;

};

#endif
