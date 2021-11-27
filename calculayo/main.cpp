#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    char op;

    cout<<"ENTER A NUMBER: "<<endl;
    cin>>num1;
    cout<<"ENTER OPERATOR: "<<endl;
    cin>>op;
    cout<<"ENTER A NUMBER: "<<endl;
    cin>>num2;

    if(op=='+'){
        cout<<"ANSWER:"<<num1 + num2<<endl;
    }else if(op=='-'){
            cout<<"ANSWER:"<<num1 - num2<<endl;
            }else if(op=='*'){
            cout<<"ANSWER:"<<num1 * num2<<endl;
            }else if(op=='/'){
            cout<<"ANSWER:"<<num1 / num2<<endl;
            }else if(op=='%'){
            cout<<"ANSWER:"<<num1 % num2<<endl;
            }else{
            cout<<"INVALID OPERATOR";
            }

    return 0;
}
