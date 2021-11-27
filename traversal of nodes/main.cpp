#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node*nextptr;
};

void PrintList(Node*node){
    while(node!=NULL){
    cout<<node->data<<"" "";
        node=node->nextptr;
    }

}

int main()
{
    Node*head=NULL;
    Node*second=NULL;
    Node*third=NULL;

    head=new Node();
    second=new Node();
    third=new Node();

    head->data=18;
    head->nextptr=second;

    second->data=2;
    second->nextptr=third;

    third->data=37;
    third->nextptr=NULL;


    PrintList(head);

    return 0;
}
