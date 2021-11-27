#include <iostream>
#include<iomanip>
#include "COMMISSIONEMPLOYEE.h"
#include "BASEPLUSCOMMISSIONEMPLOYEE.h"

using namespace std;

int main()
{
    CommissionEmployee commissionEmployee("MARVIN","NYANJUI","549-555-643",67000,0.78);//BASE CLASS OBJECT

    CommissionEmployee *commissionEmployeePtr=nullptr;//BASE CLASS POINTER

    BasePlusCommissionEmployee basePlusCommissionEmployee("EDDY","NYANJUI","133-344-432",59544,0.45);//DERIVED CLASS OBJECT

    BasePlusCommissionEmployee *basePlusCommissionEmployeePtr=nullptr;//DERIVED CLASS POINTER

    cout<<fixed<<setprecision(3);//SET FLOATING POINT OUTPUT FORMATTING

    //OUTPUT BOTH OBJECTS
    cout<<"PRINT BASE CLASS AND DERIVED CLASS OBJECTS\n\n\n";
    commissionEmployee.print();
    cout<<"\n\n\n";
    basePlusCommissionEmployee.print();

    //AIM BASE CLASS POINTER TO BASE CLASS OBJECT AND PRINT
    commissionEmployeePtr=&commissionEmployee;//PERFECTLY NATURAL
    cout<<"\n\n\nCALLING PRINT WITH BASE CLASS POINTER TO"
    <<"\nBASE CLASS OBJECT INVOKES BASE CLASS PRINT FUNCTION:\n\n\n";
    commissionEmployeePtr->print();


    //AIM DERIVED CLASS POINTER AT DERIVED CLASS OBJECT AND PRINT
    basePlusCommissionEmployeePtr=&basePlusCommissionEmployee;//NATURAL

    cout<<"\n\n\nCALLING PRINT WITH DERIVED CLASS POINTER TO"
    <<"\nDEREIVED CLASS OBJECT INVOKED DERIVED CLASS PRINT FUNCTION:\n\n\n";
    basePlusCommissionEmployeePtr->print();//INVOKES DERIVED CLASS PRINT


    //AIM BASE CLASS POINTER TO DERIVED CLASS OBJECT AND PRINT
    commissionEmployeePtr=&basePlusCommissionEmployee;//NATURAL

    cout<<"\n\n\nCALLING PRINT WITH BASE CLASS POINTER TO"
    <<"\nDERIVED CLASS OBJECT\n INVOKES BASE CLASS PRINT:"
    <<"FUNCTION OF THAT DERIVED CLASS OBJECT:\n\n\n";
    commissionEmployeePtr->print();
    cout<<endl;


    return 0;
}
