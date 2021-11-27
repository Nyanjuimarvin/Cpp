#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#include <string>

class Node
{
public:
    Node();
    void setdata( unsigned int );
    unsigned int getdata()const;
    void setnext( Node*);
    void push( Node ** , int );
    void append( Node **, int );
    void insertBefore( Node *, int );
    void printList( Node *);

private:
    unsigned int data;
    Node *next;
};
#endif
