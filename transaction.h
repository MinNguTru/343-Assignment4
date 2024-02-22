#include "book.h"
#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
using namespace std;

class Transaction
{
public:
    Transaction(string transactionType, Book book);
    ~Transaction();

    // Display information
    void checkOutInfo();
    void bookInfo();
    void transactionInfo();

private:
    Book *book;
    string transactionType;
};

#endif