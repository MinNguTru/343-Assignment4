#ifndef BOOK_H
#define BOOK_H
#include "date.h"
#include "patron.h"
#include <iostream>
using namespace std;

class Book
{
public:
    Book(int bookID, Date DatepublicationDate, string bookTitle, string bookAuthor, char bookCategory,
         int copiesAvailable);
    ~Book();
    void display();
    Date getDate();
    void setDate();
    bool addPatron(int patronID);
    bool hasPatron();
    bool removePatron();

private:
    int bookID;
    Date publicationDate;
    string bookTitle;
    string bookAuthor;
    char bookCategory;
    Patron *patronsAssociated[100];
    int copies;
    bool checkedOut;
};

#endif