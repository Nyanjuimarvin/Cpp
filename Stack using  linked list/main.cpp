#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class StackNode{
public:
    int data;
    StackNode* next;
};

//IMPLEMENTING NEW STACK
StackNode*NewNode(int data)
{
    StackNode*stackNode=new StackNode();
    stackNode->data=data;
    stackNode->next=NULL;
    return stackNode;
};

//CHECK IF STACK IS EMPTY
int isEmpty(StackNode*root)
{
    return !root;
}


//ADD ELEMENTS TO THE STACK
void push(StackNode**root,int data)
{
    StackNode* stackNode=NewNode(data);
    stackNode->next=(*root);
    (*root)=stackNode;
    cout<<data<<"PUSHED TO STACK\n";
}


//REMOVE TOP ELEMENT
int pop(StackNode**root)
{
    if(isEmpty(*root))
        return INT_MIN;
    StackNode*temp=*root;
    *root=(*root)->next;
    int popped=temp->data;
    free(temp);
    return popped;
}


//CHECK THE ELEMENT AT THE TOP OF THE STACK
int peek(StackNode**root)
{
    if(isEmpty(*root))
    return INT_MIN;
    return (*root)->data;
}


int main()
{
    StackNode*root=NULL;

    push(&root,10);
    push(&root,20);
    push(&root,30);
    push(&root,40);
    push(&root,50);


    cout<<pop(&root)<<"POPPED FROM STACK\n";
    cout<<"TOP ELEMENT IS: "<<peek(&root)<<endl;
    cout<<"ELEMENTS IN STACK ARE: ";

    //FOR TRAVERSING THE STACK
    while(!isEmpty(root))
    {

        cout<<peek(&root)<<"";

        pop(&root);
    }

    return 0;
}
