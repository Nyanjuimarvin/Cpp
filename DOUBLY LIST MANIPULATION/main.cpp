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


void push(Node**head_ref,int new_data)
{
    Node*New_node=new Node;
    New_node->data=new_data;
    New_node->nextptr=(*head_ref);
    (*head_ref)=New_node;
    New_node->prevptr=NULL;
}

int main()
{
    Node*head=NULL;

    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);

    printList(head);
    cout<<""<<&head<<endl;
    return 0;
}
