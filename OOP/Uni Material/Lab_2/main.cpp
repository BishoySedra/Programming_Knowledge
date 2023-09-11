// Built-in Libraries
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

// Classes
#include "Book.h"
#include "Author.h"

using namespace std;

int main()
{
    Author author("Bishoy");

    // 3 book objects
    Book book1(500);
    Book book2("Programming Fundamentals 1", 600);
    Book book3("Programming Fundamentals 2", 1000, 150.0f);

    book1.setName("Programming Fundamentals 0");
    book1.setPrice(50);

    book2.setPrice(100);

    author.addBook(make_shared<Book>(book1), 1);
    author.addBook(make_shared<Book>(book2), 2);
    author.addBook(make_shared<Book>(book3), 3);

    author.searchBook("Programming Fundamentals 0");

    author.displayBooksData();
    return 0;
}