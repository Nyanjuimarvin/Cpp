#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


#include <iostream>
#include <iomanip>
#include <array>

static const size_t arraySize{10};

class stack
{
public:
    stack();
    ~stack();
    int top{-1};
    std::array< int, arraySize >fd;
    void push( int );
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};


#endif // STACK_H_INCLUDED
