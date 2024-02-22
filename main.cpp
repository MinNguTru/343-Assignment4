#include "library.h"
#include <fstream>

int main()
{
    Library library;

    // put books in library
    ifstream bookFile("example.txt");
    library.readBookfile(bookFile);

    // add patron
    library.addPatron(11111, "Bob", "Tom");

    Patron patron = library.getPatron(1111);

    // display books
    patron.displayLibrary();

    // do library transactions (checkout and return books)
    patron.checkOutBook('F', 1232123);
    patron.checkOutBook('C', 213132);
    patron.checkOutBook('P', 321233);
    patron.returnBook('F', 1232123);

    // show all transactions
    patron.displayTransactions();

    return 0;
}