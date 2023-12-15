#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

using namespace std;
//
//Attributes:
//
//name(string) : The name of the customer.
//email(string) : The email address of the customer.
//books_purchased(vector<Book>) : A vector of books purchased by the customer.
//Methods :
//
//	Constructor : Initializes a new customer object with the given name and email.
//	purchase_book(book : Book) : Adds a book to the customer's list of purchased books.
//	get_purchased_books()->vector<string> : Returns a vector of book titles purchased by the customer.*/

class Customer
{
private:
	string _name;
	string _email;
	vector<Book>_books_purchased;
public:
	// Constructor
	Customer(string name, string email)
		: _name(name), _email(email) {}

	// Setter for _name
	void setName(string name) {
		_name = name;
	}

	// Getter for _name
	string Name() const {
		return _name;
	}

	// Setter for _email
	void setEmail(string email) {
		_email = email;
	}

	// Getter for _email
	string Email() const {
		return _email;
	}

	// Getter for _books_purchased
	vector<Book> get_books_purchased() {
		return _books_purchased;
	}
	
	// methods
	void purchase_book(Book book) {
		_books_purchased.push_back(book);
	}
};

