#include <iostream>
#include <iomanip>
#include <cstddef>

using namespace std;

class Node{
public:
    int data;
    Node * nextptr;
};

void printList( Node *n)
{
    if( n!=NULL)
        cout<<n->data<<"";
    n=n->nextptr;
}

int main()
{
    Node*head=NULL;
    Node*second=NULL;
    Node*third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=1;
    head->nextptr=second;

    second->data=2;
    second->nextptr=third;

    third->data=3;
    third->nextptr=NULL;


    printList(head);
    return 0;
}
