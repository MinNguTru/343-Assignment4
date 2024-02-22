#ifndef PATRON_H
#define PATRON_H
#include "transaction.h"
#include <iostream>
using namespace std;

class Patron
{
public:
    Patron(int ID, string lastName, string firstName);
    ~Patron();
    bool checkOutBook(char bookCategory, int bookID);
    bool returnBook(char bookCategory, int bookID);
    void displayTransactions();

private:
    int ID;
    string lastName;
    string firstName;
    Transaction allTransactions[];
};

#endif