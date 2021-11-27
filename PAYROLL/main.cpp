#include <iostream>
#include <iomanip>
#include <vector>
#include "EMPLOYEE.h"
#include "SALARIEDEMPLOYEE.h"
#include "COMMISSIONEMPLOYEE.h"
#include "BASEPLUSCOMMISSIONEMPLOYEE.h"

using namespace std;

void VirtualViaPointer( const Employee * const);//PROTOTYPE
void VirtualViaReference( const Employee &);//PROTOTYPE


int main()
{
    cout<<fixed<<setprecision(2);

    SalariedEmployee salariedEmployee(
    "MARVIN","NYANJUI","3444-4554-4533",12000.0);

    CommissionEmployee commissionEmployee(
    "EDDY","NYANJUI","3084-4554-4533",45595.0,.56);

    BasePlusCommissionEmployee basePlusCommissionEmployee(
    "AMOS","NYANJUI","9484-4554-4533",56000.0,.45,45600.0);

    cout<<"EMPLOYEES PROCESSED BY STATIC BINDING:\n"<<endl;

    salariedEmployee.print();
    cout<<"\nEARNED: "<<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nEARNED: "<<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nEARNED: "<<basePlusCommissionEmployee.earnings()<<"\n\n";

    //CREATE VECTOR OF 3 BASE CLASS POINTERS
    vector< Employee * >employees(3);

    //INITIALIZE VECTORS WITH POINTERS TO EMPLOYEES
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;

    cout<<"EMPLOYEES PROCESSED POLYMORPHICALLY VIA DYNAMIC BINDING:\n\n";

    //CALL VIRTUALVIAPOINTER TO PRINT EACH EMPLOYEE'S INFO AND EARNINGS VIA DYNAMIC BINDING

    cout<<"VIRTUAL FUNCTION CALLS MADE OF BASE CLASS POINTERS:\n\n";

    for( const Employee *employeePtr : employees )
        VirtualViaPointer( employeePtr );

    //CALL VIRTUALVIAREFERNCE TO PRINT EACH EMPLOYEE'S INFO AND EARNINGS USING DYNAMIC BINDING

    cout<<"VIRTUAL FUNCTION CALLS MADE OF BASE CLASS REFERENCES:\n\n";

    for( const Employee *employeePtr : employees )
        VirtualViaReference( *employeePtr );
}//END MAIN


//CALL EMPLOYEE VIRTUAL FUNCTIONS PRINT AND EARNINGS OFF A BASE CLASS POINTER USING DYNAMIC BINDING
    void VirtualViaPointer( const Employee * const baseClassPtr )
    {
        baseClassPtr->print();
        cout<<"\nEARNED: "<<baseClassPtr->earnings()<<"\n\n";
    }  //END FUNCTION VIRTUALVIAPOINTER

    //CALL EMPLOYEE VIRTUAL FUNCTIONS PRINT AND EARNINGS OFF A BASE CLASS REFERENCE USING DYNAMIC BINDING

    void VirtualViaReference( const Employee &baseClassRef )
    {
        baseClassRef.print();
        cout<<"\nEARNED: "<<baseClassRef.earnings()<<"\n\n";
    }


