#include <iostream>
#include <iomanip>
#include <cstddef>


using namespace std;


//created a basic class for the node;A LINKED LIST
class Node{
  public:
    int data;
    Node*nextptr;
};


//A FUNCTION THAT PRINTS OUT THE DATA IN THE LINKED LIST
void printList(Node*n){
    while(n!=NULL){
        cout<<setw(3)<<n->data<<"";
       n=n->nextptr;//fetches values from the next pointer
    }
}


int main()
{
//creating the nodes and inputing data

//initialize the list as null:WITHOUT VALUE

  Node*head=NULL;
  Node*second=NULL;
  Node*third=NULL;

  //create new nodes for the list
  head=new Node();
  second=new Node();
  third=new Node();

  //ADD DATA TO THE LIST

  head->data=5;//link the first node to the second
  head->nextptr=second;
  second->data=8;
  second->nextptr=third;
  third->data=9;
  third->nextptr=NULL;//since there is no other node the third node will point to a null pointer

  printList(head);//this will print oout the data in the list starting from the head
    return 0;
}
