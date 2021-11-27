#include <iostream>

using namespace std;

class Book
{
private:
    int price;
    string vendor;

    void getWhere(int price,string vendor)const
    {
        cout<<"ENTER A PRICE: "<<endl;
        cin>>price;
        cout<<"ENTER VENDOR: "<<endl;
        getline(cin,vendor);
        cout<<"THE PRICE OF THE BOOK IS: "<<price<<endl;
        cout<<"THE BOOK CAN BE BOUGHT FROM: "<<vendor<<endl;
    }

public:
    string name;
    string author;
    int noOfPages;
    int yearPublished;

    void giveDetails(string name,string author,int noOfPages,int yearPublished)const
    {
        cout<<"DETAILS OF THE BOOK ARE : "<<endl;
        cout<<"TITLE: "<<name<<endl;
        cout<<"AUTHOR: "<<author<<endl;
        cout<<"NO OF PAGES: "<<noOfPages<<endl;
        cout<<"YEAR OF PUBLISHING: "<<yearPublished<<endl;
        cout<<endl;

    }
};

int main()
{
    Book book1;
    book1.giveDetails("LORD OF THE RINGS","ICEJJFISH",375,2008);

    book1.getWhere(546,"text book center");
    return 0;
}
