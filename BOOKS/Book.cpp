#include<iostream>
#include <stdexcept>
#include "BOOK.h"

using namespace std;

Book::Book(const string &Author, const string &Company, const string &Genre, int Year, int Pages, double Age, double Price)
{
    author=Author;
    company=Company;
    genre=Genre;
    setYear(year);
    setPages(Pages);
    setAge(Age);
    setPrice(Price);

}


    void Book::setAuthor(const string &Author)
    {
        author=Author;
    }

    string Book::getAuthor()const
    {
        return author;
    }

    void Book::setCompany(const std::string &Company)
    {
        company=Company;
    }

    string Book::getCompany()const
    {
        return company;
    }

    void Book::setGenre(const std::string &Genre)
    {
        genre=Genre;
    }

    void Book::setYear(int Year)
    {
        year=Year;
    }

    int Book::getYear()const
    {
        if(year >=1800 && year <=2021)
        {
            return year;
        }
        else{
            throw invalid_argument("YEAR MUST BE >=1800 OR <=2021");
        }
    }

    void Book::setPages(int Pages)
    {
        pages=Pages;
    }

    int Book::getPages()const
    {
        if(pages>=0)
        {
            return pages;
        }
        else{
            throw invalid_argument("PAGES MUST BE >= 0");
        }
    }

    void Book::setAge(double Age)
    {
        age=Age;
    }

    double Book::getAge()const
    {
        if(age>=0.0)
        {
            return age;
        }
        else{
            throw invalid_argument("AGE MUST BE >= 0.0");
        }
    }

    void Book::setPrice(double Price)
    {
        price=Price;
    }

    double Book::getPrice()const
    {
        if(price>=0.0)
        {
            return price;
        }
        else{
            throw invalid_argument("PRICE NUST BE >=0.0");
        }
    }

    void Book::bookDetails()const
    {
            cout<<"THE DETAILS OF THE BOOK ARE: "
            <<"\nAUTHOR NAME: "<<author
            <<"\nPUBLISHING COMPANY: "<<company
            <<"\nGENRE: "<<genre
            <<"\nYEAR OF PUBLISHING: "<<year
            <<"\nNUMBER OF PAGES: "<<pages
            <<"\nSUITABLE FOR AGE: "<<age<<"+"
            <<"\nPRICE: "<<price<<endl;

    }

