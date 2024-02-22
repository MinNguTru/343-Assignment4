#include "pateron.h"
#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
using namespace std;

class Transaction {
public:
    Transaction();
    Transaction(Pateron pateron, Book book);
    ~Transaction();

    // Display information
    void checkOutInfo();
    void bookInfo();
    void transactionInfo();

private:
    Patreon patreon;
    Book book;
    bool checkOut; // True if order is checked out, false if returned
};

#endif