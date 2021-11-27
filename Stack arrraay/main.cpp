#include <iostream>


using namespace std;

class Stack{
private:
    int top;//STORES VALUE OF TOP OF THE STACK
    int arr[20];//INITIALIZE ARRAY

public:
    stack()//CONSTRUCTOR TO USE THE PRIVATE CLASS
    {
        top=-1;//SET TOP TO BELOW ZERO WHERE ARRAY INDEXING BEGINS
        for(int i=0;i<20;i++)//LOOP TO FILL IN ARRAY ELEMENTS
        {
            arr[i]=0;
        }
    }
};

bool isEmpty()//BOOLEAN TO CHECK IF STACK IS EMPTY
{
    if(top==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

bool isFull()
{
    if(top==19)
    {
        return true;
    }
    else{
        return false;
    }
}

int push(int val)
{
    if(isFull())
    {
        cout<<"STACK OVERFLOW";
        return 0;
    }
else{
    arr[top]=val;
    top++;
}
}

int pop()
{
    if(isEmpty())
    {
        cout<<"STACK UNDERFLOW";
        return 0;
    }
    else{
        int temp;
        temp=arr[top];
        arr[top]=0;
        top--;
        return temp;
    }
}

int elements()
{
    return(top+1);
}

int peek(int position)
{
    if(isEmpty())
    {
        cout<<"STACK UNDERFLOW";
        return 0;
    }
    else{
       return arr[position];
    }
}

void change(int position, int value)
{
    arr[position]=value;
    cout<<"VALUE CHANGED AT POSITION: \n";
}

void display()
{
    cout<<"ALL VALUES IN TJE STACK ARE: \t"<<endl;
    for(int i=19;i>=0;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    Stack Stack s;

    return 0;
}
