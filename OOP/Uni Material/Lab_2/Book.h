#pragma once
#include <iostream>

using namespace std;

class Book
{
private:
    string _name;
    const int _numberOfPages;
    float _price;

public:
    // constructors
    Book(int numberOfPages) : _numberOfPages(numberOfPages){};
    Book(string name, int numberOfPages) : _name(name), _numberOfPages(numberOfPages) {}
    Book(string name, int numberOfPages, float price) : _name(name), _numberOfPages(numberOfPages), _price(price){};

    // setters
    void setName(string name)
    {
        _name = name;
    }
    void setPrice(float price)
    {
        _price = price;
    }

    // getters
    string getName()
    {
        return _name;
    }
    float getPrice()
    {
        return _price;
    }
    int getNumberOfPages()
    {
        return _numberOfPages;
    }

    // methods
    void displayBookInfo()
    {
        cout << "Book Info:\n=======================\n";
        cout << "Name: " << getName() << " \nNumber of Pages: " << getNumberOfPages() << "\nPrice: " << getPrice() << "\n=======================\n";
    };
};