#include<iostream>
#include<iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee employee1("MARVIN","NYANJUI","53-345-4543",30000,0.87);
    cout<<fixed<<setprecision(3);

    cout<<"EMPLOYEE INFORMATION OBTAINED BY GET FUNCTIONS: \n"
        <<"FIRST NAME IS "<<employee1.getFirstName()
        <<"\nLAST NAME IS "<<employee1.getLastName()
        <<"\nSOCIALSECURITYNUMBERIS "<<employee1.getSocialSecurityNumber()
        <<"\n\GROSS SALES IS "<<employee1.getGrossSales()
        <<"\nCOMMISSION RATE IS "<<employee1.getCommissionRate()<<endl;

    employee1.setGrossSales(45000);
    employee1.setCommissionRate(0.45);

    cout<<"UPDATED INFORMATION OUTPUT BY PRINT FUNCTION: \n"<<endl;

    employee1.print();

    cout<<"\n\nEMPLOYEES EARNINGS: $"<<employee1.earnings()<<endl;
    return 0;
}
