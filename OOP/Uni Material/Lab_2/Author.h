#include <iostream>
#include <vector>
#include <cctype>
#include <memory>
#include "Book.h"

using namespace std;

class Author
{
private:
    const string _name;
    vector<shared_ptr<Book>> _books;

public:
    Author(string name) : _name(name)
    {
        _books.resize(3);
    }

    // getters
    string getName()
    {
        return _name;
    }

    // methods
    void addBook(shared_ptr<Book> book, int index)
    {
        if (index < 1 || index > 3)
        {
            cout << "Invalid Index!\n";
            return;
        }

        _books[index - 1] = book;
    }

    Book searchBook(string name)
    {
        for (auto book : _books)
        {
            if (book->getName() == name)
            {
                return *book;
            }
        }

        return Book("Not Found", 0, 0.0f);
    }

    void displayBooksData()
    {
        for (auto book : _books)
        {
            book->displayBookInfo();
        }
    }
};
