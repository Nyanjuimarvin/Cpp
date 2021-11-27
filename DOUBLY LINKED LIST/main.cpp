#include <iostream>
#include<cstddef>

using namespace std;

class Node{
public:
    int data;
    Node*nextptr;
    Node*prevptr;
};

void printList(Node*n)
{
    while(n!=NULL)
        {
    cout<<n->data<<"\t";
        n=n->nextptr;
        }
}

void printReverse(Node*p)
{
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->prevptr;
    }
}
int main(){
    Node*head=NULL;
    Node*first=NULL;
    Node*second=NULL;
    Node*third=NULL;

    head=new Node();
    first=new Node();
    second=new Node();
    third=new Node();

    head->data=4;
    head->nextptr=first;
    head->prevptr=NULL;
    first->data=7;
    first->nextptr=second;
    first->prevptr=head;
    second->data=5;
    second->nextptr=third;
    second->prevptr=first;
    third->data=9;
    third->nextptr=NULL;
    third->prevptr=second;

    printList(head);
    printReverse(third);

    return 0;
}
