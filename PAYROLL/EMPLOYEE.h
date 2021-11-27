#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include<string>

class Employee
{
public:
    Employee(const std::string &,const std::string &, const std::string &);//CONSTRUCTOR
    virtual~Employee(){};//VIRTUAL DESTRUCTOR

    void setFirstName(const std::string &);
    std::string getFirstName()const;

    void setLastName(const std::string &);
    std::string getLastName()const;

    void setSocialSecurityNumber(const std::string &);
    std::string getSocialSecurityNumber()const;

    //PURE VIRTUAL FUNCTION MAKES EMPLOYEE ABSTRACT BASE CLASS
    virtual double earnings()const=0;//PURE VIRTUAL
    virtual void print()const;//VIRTUAL

private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
};



#endif // EMPLOYEE_H_INCLUDED
