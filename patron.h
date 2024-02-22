#ifndef PATRON_H
#define PATRON_H
#include "transaction.h"
#include "library.h"
#include <iostream>
using namespace std;

class Patron
{
public:
    Patron(int ID, string lastName, string firstName, Library library);
    ~Patron();
    bool checkOutBook(char bookCategory, int bookID);
    bool returnBook(char bookCategory, int bookID);
    void displayTransactions();
    void displayLibrary();

private:
    int ID;
    string lastName;
    string firstName;
    Transaction allTransactions[100];
    Library library;
};

#endif