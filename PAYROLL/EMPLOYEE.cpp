#include <iostream>
#include "EMPLOYEE.h"

using namespace std;


//CONSTRUCTOR
Employee::Employee(const string &first,const string &last,const string &ssn)
:firstName(first),lastName(last),socialSecurityNumber(ssn)
{
    //EMPTY BODY
}//END CONSTRUCTOR

void Employee::setFirstName(const string &first)
{
    firstName=first;
}

string Employee::getFirstName()const
{
    return firstName;
}

void Employee::setLastName(const string &last)
{
    lastName=last;
}

string Employee::getLastName()const
{
    return lastName;
}

void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber=ssn;
}

string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}
//VIRTUAL PRINT PROVIDES IMPLEMENTATION THAT WILL BE OVERRIDDEN IN EACH DERIVED CLASS
void Employee::print()const//EMPLOYEE'S INFORMATION:VIRTUAL BUT NOT PURE VIRTUAL
{
    cout<<getFirstName()<<" "<<getLastName()
    <<"\nSOCIAL SECURITY NUMBER: "<<getSocialSecurityNumber();
}
