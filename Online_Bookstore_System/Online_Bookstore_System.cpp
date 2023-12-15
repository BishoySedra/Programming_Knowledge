#include <iostream>
#include "Book.h";
#include "Customer.h";

using namespace std;

int main()
{
    Book obj1("Programming Fundamentals", "Bishoy Sedra", "12564789", 1256);
    Book obj2("Programming Fundamentals 2", "Bishoy Sedra", "12564789", 156256);
    
    Customer c1("Sedra", "Sedra@gmail.com");
    c1.purchase_book(obj1);
    c1.purchase_book(obj2);
       
    cout << c1.Name() << ":\n";
    for (auto book : c1.get_books_purchased()) {
        cout << book.getInfo();
    }
}