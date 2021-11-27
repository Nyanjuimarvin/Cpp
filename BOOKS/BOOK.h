#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

class Book{
public:

    Book(const std::string &, const std::string &, const std::string &, int=0, int=0, double=0.0, double=0.0);

    void setAuthor(const std::string &);
    std::string getAuthor()const;

    void setCompany(const std::string &);
    std::string getCompany()const;

    void setGenre(const std::string &);
    std::string getGenre()const;

    void setYear(int);
    int getYear()const;

    void setPages(int);
    int getPages()const;

    void setAge(double);
    double getAge()const;

    void setPrice(double);
    double getPrice()const;

    void bookDetails()const;

private:
    std::string author;
    std::string company;
    std::string genre;
    int year;
    int pages;
    double age;
    double price;
};

#endif // BOOK//H//INCLUDED
