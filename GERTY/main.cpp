#include <iostream>
#include "LIST.h"

using namespace std;


int main()
{
    Node *head = NULL;
    Node *second=NULL;
    Node *third=NULL;
    Node *fourth=NULL;
    Node *fifth=NULL;
    Node *sixth=NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    fifth = new Node();
    sixth = new Node();


    head->setdata(43);
    head->setnext(second);
    second->setdata(56);
    second->setnext(third);
    third->setdata(29);
    third->setnext(fourth);
    fourth->setdata(48);
    fourth->setnext(fifth);
    fifth->setdata(48);
    fifth->setnext(sixth);
    sixth->setdata(81);
    sixth->setnext(NULL);



      return 0;
}
