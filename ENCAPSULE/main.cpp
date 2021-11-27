#include <iostream>

using namespace std;

class Employee{
private:
    int salary;
public:
    void setSalary(int x)
    {
        salary=x;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee employee1;
    employee1.setSalary(54000);
    cout<<"TOTAL INCOME FOR THIS EMPLOYEE IS: "<<employee1.getSalary();
    return 0;
}
