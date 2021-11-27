#include <iostream>
#include<cstddef>

using namespace std;

class Node
{
public:
    int data;
    Node*next;
    Node*prev;
};

void push(Node**head_ref,int new_data)
{
    Node*New_node=new Node();
    New_node->data=new_data;
    New_node->next=(*head_ref);
    New_node->prev=NULL;

    if((*head_ref)!=NULL)
    {
        (*head_ref)->prev=New_node;
        (*head_ref)=New_node;
    }
}

void insertAfter(Node*prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"THE PREVIOUS NODE GIVEN CANNOT BE NULL";
        return;
    }

    Node*New_node=new Node();
    New_node->data=new_data;
    New_node->next=prev_node->next;
    prev_node->next=New_node;
    New_node->prev=prev_node;

    if(New_node->next==NULL)
    {
        New_node->next->prev=New_node;
        return;
    }
}

void insertBefore(Node**head_ref,Node*next_node,int new_data)
{
    if(next_node==NULL)
    {
        cout<<"THE GIVEN NEXT NODE CANNOT BE NULL";
    }

    Node*New_node=new Node();
    New_node->data=new_data;
    New_node->next=next_node;
    New_node->prev=next_node->prev;

}

void append(Node**head_ref,int new_data)
{
    Node*New_node=new Node;
    Node*last=(*head_ref);
    New_node->data=new_data;
    New_node->next=NULL;

   if((*head_ref)==NULL)
   {
       New_node->prev=NULL;
       (*head_ref)=New_node;
   }
   while(last->next!=NULL)
   {
       last=last->next;
       last->next=New_node;
       New_node->prev=last;

       return;
}
}

void printList(Node*node)
{
    while(node!=NULL)
    {
        cout<<node->data<<"\t";
        node=node->next;
    }
}

int main()
{
    Node*head=NULL;
    head=new Node();


    push(&head,5);
    push(&head,34);
    append(&head,57);
    push(&head,8);
    push(&head,7);
    push(&head,6);

    insertAfter(head->next,56);

    printList(head);

    return 0;
}
