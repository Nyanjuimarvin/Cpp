#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node*nextptr;
};

void Push(Node**head_ref,int new_data){

    Node*new_node=new Node();
    new_node->data=new_data;
    new_node->nextptr=(*head_ref);
    (*head_ref)=new_node;
}

void InsertAfter(Node*prev_node, int new_data){
    if(prev_node==NULL){
        cout<<"THE GIVEN PREVIOUS NODE CANNOT BE NULL"<<endl;
        return;
    }
    Node*new_node=new Node();
    new_node->data=new_data;
    new_node->nextptr=prev_node->nextptr;
    prev_node->nextptr=new_node;
}

void Append(Node**head_ref,int new_data){
    Node*new_node=new Node();
    Node*last=*head_ref;
    new_node->data=new_data;
    new_node->nextptr=NULL;

    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->nextptr!=NULL)
        last=last->nextptr;

    last->nextptr=new_node;
    return;
}

voidPrintList(Node*node){
    while(node!=NULL)
        cout<<""<<node->data;
    node=node->nextptr;
}

int main()
{
    return 0;
}
