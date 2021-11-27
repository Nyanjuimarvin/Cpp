#include <iostream>

using namespace std;

int main()
{
    int age=897890;
    int *pAge=&age;

    cout<<""<<*&*&age;
    return 0;
}
