#include <iostream>
#include "Library.h"
using namespace std;

int main()
{
    Library library;
    library.addBook("Book one", "Author one", 2016);
    library.addBook("Book two", "Author two", 2005);
    library.addBook("Book three", "Author three", 2023);
    cout << "Books in the library: " << endl;

    library.display();
    library.deleteBook("Book three", "Author three"); 
    cout << "\nList of books after deleting Book three:" << endl;
    library.display();
}