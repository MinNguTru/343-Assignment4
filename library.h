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
    void addPatron(int ID, string lastName, string firstName);
    void addBook(int bookID, Date publicationDate, string bookTitle, string bookAuthor, char bookCategory, int copiesAvailable);
    void readBookfile(ifstream &bookFile);
    static int createBookID() const;

private:
    Book[] periodicBooks;
    Book[] fictionalBooks;
    Book[] childrensBooks;
    Patron[] patrons;
}