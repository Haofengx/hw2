#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
#include <set>
#include "product.h"
#include "util.h"

class Book : public Product {
public:
	Book(const std::string category, const std::string name, double price, int qty, std::string ISBN, std::string author);
	~Book();
	/**
		* Returns the appropriate keywords that this product should be associated with
		*/
	std::set<std::string> keywords() const;
	/**
		* Returns a string to display the product info for hits of the search
		*/
	std::string displayString() const;
	/**
		* Outputs the product info in the database format
		*/
	void dump(std::ostream& os) const;
	/**
		* Accessors and mutators
		*/
	std::string getISBN() const;
	std::string getAuthor() const;

private:
	std::string ISBN_;
	std::string author_;
};
#endif