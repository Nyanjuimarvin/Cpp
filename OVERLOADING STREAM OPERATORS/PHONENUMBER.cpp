//OVERLOADED STREAM INSERTION AND EXTRACTION OPERATORS
//FOR CLASS PHONENUMBER
#include <iomanip>
#include "PHONENUMBER.h"

using namespace std;
//OVELOADED STREAM INSERTION OPERATOR ;CANNOT BE
//A MEMBER FUNCTION IF WE WOULD LIKE TO INVOKE IT WITH
//COUT << SOMEPHONENUMBER

 ostream &operator<<(ostream &output , const PhoneNumber &number )
 {
     output << "(" << number.areaCode << ")"
            << number.exchange << "-" << number.line;
    return output;//ENABLES COUT << A << B << C
 }

//OVELOADED STREAM EXTRACTION OPERATOR ;CANNOT BE
//A MEMBER FUNCTION IF WE WOULD LIKE TO INVOKE IT WITH
//CIN >> SOMEPHONENUMBER

istream &operator>>( istream &input, PhoneNumber &number )
{
    input.ignore();//skip (
    input >> setw(3) >> number.areaCode;
    input.ignore(2);//skip ) and space
    input >> setw(3) >> number.exchange;
    input.ignore(); //skip dash (-)
    input >> setw(4) >>number.line;
    return input;
}
