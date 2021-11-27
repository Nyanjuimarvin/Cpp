#include<iostream>
#include<stdexcept>
#include "BASEPLUS.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rates, double salary)
{
    firstName=first;
    lastName=last;
    socialSecurityNumber=ssn;
    setGrossSales(sales);
    setCommissionRate(rates);
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setFirstName(const string &first)
{
    firstName=first;
}

string BasePlusCommissionEmployee::getFirstName()const
{
    return firstName;
}

void BasePlusCommissionEmployee::setLastName(const string &last)
{
    lastName=last;
}

string BasePlusCommissionEmployee::getLastName()const
{
    return lastName;
}

void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}

string BasePlusCommissionEmployee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}

void BasePlusCommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
   {
        grossSales=sales;
   }
   else{
    throw invalid_argument("SALES MUST BE >= 0");
   }
}

double BasePlusCommissionEmployee::getGrossSales()const
{
    return grossSales;
}

void BasePlusCommissionEmployee::setCommissionRate(double rates)
{
   if(rates>0.0 && rates<1.0)
   {
        commissionRate=rates;
   }
   else{
    throw invalid_argument("RATES MUST BE > 0 AND < 1");
   }
}

double BasePlusCommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}

void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary>0)
    {
        baseSalary=salary;
    }
    else {
        throw invalid_argument("SALARY MUST BE > 0");
    }
}

double BasePlusCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings()const
{
    return baseSalary+(commissionRate * grossSales);
}

void BasePlusCommissionEmployee::print()const
{
    cout<<"BASE SALARIED COMMISSIONED EMPLOYEE: "<<firstName<<""<<lastName
    <<"\nSOCIAL SECURITY NUMBER: "<<socialSecurityNumber
    <<"\nGROSS SALES: "<<grossSales
    <<"\nCOMMISSION RATE: "<<commissionRate
    <<"\nBASE SALARY: "<<baseSalary;
}

