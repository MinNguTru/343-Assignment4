#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book
{
public:
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