#include <iostream>
#include <iomanip>
#include "LIST.h"

Node::Node()
{

}

void Node::setdata( unsigned int bit )
{
    if( bit > 0 )
    bit = data;

}

unsigned int Node::getdata()const
{
    return data;
}

void Node::setnext( Node *nxt )
{
    nxt=next;
}

void Node::push( Node **head_Ref, int new_data )
{
    Node *New_node = new Node();
    new_data=getdata();
    New_node->data = new_data;
    New_node->next=(*head_Ref);
    (*head_Ref)=New_node;
}

void Node::append( Node**head_Ref, int new_data )
{
    Node *New_node = new Node();
    Node *last=(*head_Ref);
    new_data=getdata();
    New_node->next=NULL;

    if((*head_Ref)== NULL )
    {
        (*head_Ref)=New_node;
        return;
    }

    while( last->next != NULL )
        last=last->next;
    last->next=New_node;
    return;
}

void Node::insertBefore( Node *prev_Node, int new_data )
{
    if( prev_Node == NULL )
    {
        std::cout << "GIVEN PREV_NODE CANNOT BE NULL" << std::endl;
        return;
    }


    Node *New_node = new Node();
    new_data = getdata();
    New_node->data=new_data;
    New_node->next = prev_Node->next;
    prev_Node->next = New_node;
}

void Node::printList( Node *n )
{
    while( n != NULL )
    {
    std::cout << n->data << "\t\t" << std::endl;
    n = n->next;
    }
}


