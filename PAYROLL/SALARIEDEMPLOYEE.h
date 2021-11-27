#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include <string>
#include "EMPLOYEE.h"//EMPLOYEE CLASS DEFINITION

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const std::string &,const std::string &,const std::string &,double=0.0);
    virtual~SalariedEmployee(){}

    void setWeeklySalary(double);
    double getWeeklySalary()const;

    //KEYWORD VIRTUAL SIGNALS INTENT TO OVERRIDE
    virtual double earnings()const override;//CALCULATE EARNINGS
    virtual void print()const override;//PRINT OBJECT

private:
    double weeklySalary;//SALARY PER WEEK
};

#endif //
