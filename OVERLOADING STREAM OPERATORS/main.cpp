#include <iostream>
#include "PHONENUMBER.h"

using namespace std;

int main()
{
    PhoneNumber phone;//object

    cout << "ENTER PHONENUMBER IN THE FORM (123) 456-7890:" <<endl;


//CIN >> PHONE INVOKES OPERATOR>> BY IMPLICITLY ISSUING
//THE NON-MEMBER FUNCTION CALL OPERATOR>>(CIN , PHONE)
    cin >> phone;

    cout << "THE PHONE ENTERED WAS: ";

//COUT << PHONE INVOKES OPERATOR<< BY IMPLICITLY ISSUING
//THE NON-MEMBER FUNCTION CALL OPERATOR<<(COUT , PHONE)
    cout << phone << endl;
}
