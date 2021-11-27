//Basic manipulation include:1:adding nodes at beginning of the list 2:adding node at a given point of the list  3: adding node at the end of the list
#include <iostream>
#include<cstddef>

using namespace std;

class Node{
public:
    int data;
    Node*nextptr;
};

void printList(Node*n){
    while(n!=NULL){
        cout<<n->data<<"\t";
        n=n->nextptr;
    }
}

//SCENARIO 1
//the function below adds a new node at the beginning of the list
void push(Node**head_ref,int new_data)//THE HEAD REF REFERS TO THE HEAD NODE
{
    Node*New_node=new Node();//create node
    New_node->data=new_data;//assign data
    New_node->nextptr=(*head_ref);//new node will point to the head reference
    (*head_ref)=New_node;//the new node will become the head node after execution
}

//SCENARIO 2

void append(Node**head_ref,int new_data)//adds a node at the end of the list//Includes a while loop for making new node the head node when the list is empty
{
   Node*New_node=new Node();
   Node*last=(*head_ref);//indicates this is the last node
   New_node->data=new_data;
   New_node->nextptr=NULL;//SINCE THIS NODE IS AT THE END, IT WILL POINT TO NULL//

   if(*head_ref== NULL)
   {
       (*head_ref)=New_node;//makes the new node the head node if the list is EMPTY
   }

   while(last->nextptr!=NULL)//
       last=last->nextptr;
       last->nextptr=New_node;//changes the pointer of the last node from NULL to this new node
}

//SCENARIO 3

void insertAfter(Node*prev_node,int new_data)
{
    if(prev_node==NULL)
    {
        cout<<"THE GIVEN PREVIOUS NODE CANNOT BE NULL"<<endl;
        return;
    }
    Node*New_node=new Node();
    New_node->data=new_data;
    New_node->nextptr=prev_node->nextptr;
    prev_node->nextptr=New_node;
}
int main()
{
    Node*head=NULL;
    Node*second=NULL;
    Node*third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=3;
    head->nextptr=second;
    second->data=4;
    second->nextptr=third;
    third->data=5;
    third->nextptr=NULL;

    printList(head);

     push(&head,89); //implementing the push function in the main function

     append(&head,345);

    printList(head);//print out new list

    insertAfter(third,34);

    printList(head);
    return 0;
}
