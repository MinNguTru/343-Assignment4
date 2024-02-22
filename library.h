#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include "patron.h"
#include "date.h"

using namespace std;

class Library
{
public:
    Library();
    ~Library();
    void displayBooks() const;
    Patron getPatron(int ID);
    void addPatron(int ID, string lastName, string firstName);
    void addBook(int bookID, Date publicationDate, string bookTitle, string bookAuthor, char bookCategory, int copiesAvailable);
    void readBookfile(ifstream &bookFile);
    static int createBookID();

private:
    Patron patrons[100];
    Book periodicBooks[100];
    Book fictionalBooks[100];
    Book childrensBooks[100];
};

#endif