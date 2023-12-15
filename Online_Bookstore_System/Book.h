#pragma once
#include <iostream>
#include <string>

using namespace std;
//Attributes:
//
//title(string) : The title of the book.
//author(string) : The author of the book.
//ISBN(string) : The International Standard Book Number of the book.
//price(float) : The price of the book.
//Methods :
//
//Constructor : Initializes a new book object with the given attributes.
//get_info()->string : Returns a string containing the book's title, author, ISBN, and price.

class Book
{
private:
	string _title;
	string _author;
	string _ISBN;
	float _price;
public:
	// constructors
	Book(string title,string author,string ISBN, float price) {
		_title = title;
		_author = author;
		_ISBN = ISBN;
		_price = price;
	}

	// setters
	void setTitle(string title) {
		_title = title;
	}
	void setAuthor(string author) {
		_author = author;
	}
	void setISBN(string ISBN) {
		_ISBN = ISBN;
	}
	void setPrice(float price) {
		_price = price;
	}

	// getters
	string Title() {
		return _title;
	}
	string Author() {
		return _author;
	}
	string ISBN() {
		return _ISBN;
	}
	float Price() {
		return _price;
	}

	// methods
	string getInfo() {
		string info = "Book Info:\n Title: " + Title() + "\n Author: " + Author() + "\n ISBN Code: " + ISBN() + "\n Price: " + to_string(Price()) + "$\n";
		return info;
	}
};

