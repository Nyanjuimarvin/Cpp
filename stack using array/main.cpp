#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack{
    int top;

public:
    int a[MAX];
    Stack(){top=-1;}
    bool isFull();
    bool isEmpty();
    bool push(int x);
    int peek();
    int pop();
    void print();

};

bool Stack::isEmpty()
{
    if(top<0)
    {
        cout<<"STACK UNDERFLOW"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::isFull()
{
    if(top>=(MAX-1))
    {
        cout<<"STACK OVERFLOW"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::push(int x)
{
    if(top>=(MAX-1))
    {
        cout<<""<<isFull()<<endl;
        return false;
    }
    else
    {
        a[top++]=x;
        cout<<x<<" PUSHED INTO STACK\n";
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<""<<isEmpty()<<endl;
    }
    else
    {
        int x=a[--top];
        cout<<x<<" POPPED FROM STACK\n";
        return x;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<""<<isEmpty()<<endl;
        return 0;
    }
    else
    {
        int x=a[top];
        cout<<"TOP ELEMENT IS: "<<x<<endl;
        return x;
    }
}

void Stack::print()
{

}

int main()
{
    Stack e;
    e.push(20);
    e.push(30);
    e.push(40);
    e.push(60);
    e.push(70);
    e.push(80);
    e.push(90);
    e.push(100);
    e.push(120);
    e.push(140);
    e.push(160);
    e.peek();
    e.pop();
    e.peek();
    e.pop();
    e.pop();
    e.peek();

    return 0;
}
