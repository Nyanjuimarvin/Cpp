#include <iostream>

using namespace std;

class Student{
public:
    string address;
    string name;
    int rollNo;
    int phonenumber;

    void studentDetails(string address , string name , int rollNo , int phonenumber){
    cout<<"STUDENT ADDRESS:"<<address<<endl;
    cout<<"STUDENT NAME:"<<name<<endl;
    cout<<"STUDENT ROLLNO:"<<rollNo<<endl;
    cout<<"STUDENT PHONE NO:"<<phonenumber<<endl;
    cout<<endl;
    }

};

int main()
{
    Student student1;
    Student student2;

    student1.studentDetails("KILLAH HIILS 10304" , "JOHN", 2 , 741994061);
    student2.studentDetails("PUTNAM AVENUE" , "SAM" , 3 ,771641045);
    return 0;
}
