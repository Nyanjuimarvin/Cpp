#include <iostream>
#include <iomanip>
#include "BASEPLUS.h"

using namespace std;

int main()
{

    BasePlusCommissionEmployee employee("MARVIN","NYANJUI","34-555-6679",50000,0.51,32980);

    cout<<fixed<<setprecision(3);

    cout<<"INFORMATION FROM GET FUNCTIONS:\n"
    <<"\nFIRST NAME IS: "<<employee.getFirstName()
    <<"\nLAST NAME IS: "<<employee.getLastName()
    <<"\nSOCIAL SECURITY NUMBER IS: "<<employee.getSocialSecurityNumber()
    <<"\nGROSS SALES IS: "<<employee.getGrossSales()
    <<"\nCOMMISSION RATE IS: "<<employee.getCommissionRate()
    <<"\nBASE SALARY IS: "<<employee.getBaseSalary()<<endl;

    employee.setBaseSalary(46000);


    cout<<"\n\nUPDATED INFORMATION BY PRINT FUNCTION:"<<endl;
    employee.print();

    cout<<endl;
    cout<<endl;

    cout<<"EMPLOYEES EARNINGS IS: "<<employee.earnings();
    return 0;
}
