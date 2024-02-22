#ifndef BOOK_H
#define BOOK_H
#include "date.h"
#include <iostream>
using namespace std;

class Book
{
public:
    Book(int bookID, Date DatepublicationDate, string bookTitle, string bookAuthor, char bookCategory,
         int copiesAvailable);
    ~Book();
    void checkStatus();
    Date getDate();
    void setDate();
    bool setPatron(int patronID);
    Patron getPatron();
    bool removePatron();

private:
    int bookID;
    Date publicationDate;
    string bookTitle;
    string bookAuthor;
    char bookCategory;
    Patron[] patronsAssociated;
    int copiesAvailable;
    bool checkedOut;
};

#endif