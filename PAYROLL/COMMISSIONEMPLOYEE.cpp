#include <iostream>
#include <stdexcept>
#include "COMMISSIONEMPLOYEE.h"

using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
:Employee(first,last,ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("GROSS SALES MUST BE >= 0.0");
}

double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0.0 && rate<1.0)
    commissionRate=rate;
    else
        throw invalid_argument("RATE MUST BE > 0.0 AND < 1.0");
}


double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}

double CommissionEmployee::earnings()const
{
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print()const
{
    cout<<"COMMISSION EMPLOYEE: ";
    Employee::print();
    cout<<"\nGROSS SALES: "<<getGrossSales()
    <<"\nCOMMISSION RATE: "<<getCommissionRate();
}