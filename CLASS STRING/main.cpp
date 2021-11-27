#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1{"happy"};
    string s2{" birthday"};
    string s3{};


    cout << "S1 IS \"" << s1 << "\"; S2 IS: \"" << s2<< "\"; S3 IS: \""<< s3 << '\"'
         << "\n\nTHE RESULTS OF COMPARING THEM ARE:"
         << "\n S2 == S1 YIELDS: "<< ( s2 == s1 ?"TRUE": "FALSE")
         << "\n S2!= S1 YIELDS:" << ( s2 != s1 ? "TRUE": "FALSE")
         << "\n S2 > S1 YIELDS: " << ( s2 > s1 ? "TRUE": "FALSE")
         << "\n S2 < S1 YIELDS: " << ( s2 < s1 ? "TRUE": "FALSE")
         << "\n S2 >= S1 YIELDS: " << ( s2 >= s1 ? "TRUE": "FALSE")
         << "\n S2 <= S1 YIELDS: " << ( s2 <= s1 ? "TRUE": "FALSE");

//TEST STRING MEMBER FUNCTION EMPTY
    cout << "\n\nTESTING S3.EMPTY()" << endl;

    if( s3.empty() )
    {
        cout << "S3 IS EMPTY ; ASSIGNING S1 TO S3;" <<endl;
        s3 = s1;

        cout << "\nS3 IS \"" << s3 << '\"';
    }

//TEST OVERLOADED STRING CONCATENATION OPERATOR

    cout << "\n\nS1+=S2 YIELDS S1 = ";
    s1 += s2;
    cout << s1;

//TEST OVERLOADED CONCATENATION OPERATOR WITH A C STRING

   cout << "\n\nS1 += \"TO YOU\" YIELDS" << endl;
   s1 += " to you ";
   cout << "S1 = " << s1 << "\n\n";

//TEST MEMBER FUNCTION SUBSTR


  cout << "THE SUBSTRING OF S1 STARTING AT LOCATION 0 FOR\n"
       << "14 CHARACTERS , S1.SUBSTR( 0,14 ), IS: \n"
       << s1.substr( 0 ,14 ) << "\n\n";

//TEST SUBSTR "TO-END-OF-STRING" OPTION
 cout << "THE SUBSTRING OF S1 STARTING AT\n"
      << "LOCATION 15, S1.SUBSTR(15) IS: \n"
      << s1.substr( 15 ) << "\n\n";

//TEST COPY CONSTRUCTOR

  string s4( s1 );
  cout << "s4 = " << s4 << "\n\n";

//TEST OVERLOADED COPY ASSIGNMENT (=)OPERATOR WITH SELF-ASSIGNMENT
  cout << "ASSIGNING S4 TO S4 " << endl;
  s4 = s4;
  cout << "S4 = " << s4 << endl;

//TEST USING OVERLOADED SUBSCRIPT OPERATOR TO CREATE LVALUE

  s1[0] = 'H';
  s1[6] = 'B';

  cout << "\nS1 AFTER S1[0] = 'H' AND S1[6] = 'B' IS: "
       << s1 << "\n\n";


//TEST SUBSCRIPT OUT OF RANGE WITH MEMBER FUNCTION AT

  try
  {
      cout << "ATTEMPT TO ASSIGN 'd' TO S1.AT(30) YIELDS:" << endl;
      s1.at( 30 ) = 'd';
  }
  catch( out_of_range &ex)
  {
      cout << "AN EXCEPTION OCCURRED: " << ex.what() << endl;
  }
   return 0;
}
