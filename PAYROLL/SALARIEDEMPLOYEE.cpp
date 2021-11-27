#include <iostream>
#include <stdexcept>
#include "SALARIEDEMPLOYEE.h"

using namespace std;


SalariedEmployee::SalariedEmployee(const string &first,const string &last,const string &ssn,double salary)
:Employee(first,last,ssn)
{
    setWeeklySalary(salary);
}


void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("WEEKLY SALARY MUST BE >= 0.0");
}

double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}

//OVERRIDE PURE VIRTUAL FUNCTION EARNINGS IN EMPLOYEE
double SalariedEmployee::earnings()const
{
    return weeklySalary;
}

void SalariedEmployee::print()const//SALARIED EMPLOYEES INFO
{
    cout<<"SALARIED EMPLOYEE:";
    Employee::print();//REUSE ABSTRACT BASE CLASS PRINT FUNCTION
    cout<<"\nWEEKLY SALARY: "<<getWeeklySalary();
}
