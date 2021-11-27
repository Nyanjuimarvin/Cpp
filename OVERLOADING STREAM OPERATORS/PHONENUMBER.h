#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED

#include <iostream>
#include <string>

class PhoneNumber
{
  friend std::ostream &operator<<( std::ostream &, const PhoneNumber & );
  friend std::istream &operator>>( std::istream &, PhoneNumber & );

  private:
      std::string areaCode;//3-digit area code
      std::string exchange;//3-digit exchange
      std::string line;//4-digit line
};


#endif // PHONENUMBER_H_INCLUDED
