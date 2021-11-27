#include <iostream>
#include <iomanip>
#include "STACK.h"

using namespace std;

stack::stack()
{

}

void stack::push( int key )
{
    if( top >= static_cast<int>(arraySize ) )
        cout << isFull() << endl;
        else
        cout << key << " PUSHED INTO STACK" << endl;
        key=fd[++top];
}

int stack::pop()
{
    int v{0};
    if( top < 0 )
    {
        cout << isFull();

    }
    else
    {
      cout << v << " WAS POPPED FROM THE STACK" << endl;
      v=fd[--top];
    }
    return fd[--top];
}

int stack::peek()
{
    if( top < 0 )
    {
        cout << isEmpty();
    }
    else
    {
        cout << "ELEMENT AT TOP IS: " << fd[top] <<endl;
    }
    return fd[top];
}

bool stack::isEmpty()
{
    if( top < 0 )
    {
        cout << "STACK UNDERFLOW" << endl;
    return true;
    }
    else
        return false;
}

bool stack::isFull()
{
    if( top >= static_cast<int>(arraySize-1) )
    {
    cout << "STACK OVERFLOW" << endl;
    return true;
    }
    else
     return false;
}
