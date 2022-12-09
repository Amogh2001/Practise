#include <cassert>
#include "Book.hpp"

Book::Book() {
	author  = "unspecified";
	title  = "unspecified";
	publisher = "unspecified";
	format  = "unspecified";
}

Book::Book( const Book& otherBook) {
	
	author= otherBook.author;
	title= otherBook.title;
	publisher= otherBook.publisher;
	format= otherBook.format;
	price= otherBook.price;
	mYearofpublication = otherBook.GetYearofpublication();
}

Book::Book(std::string bookTitle) {
	title = bookTitle;
}

void Book::SetYearofpublication(int year) {
	assert((year > 1440) && (year < 2024));
	mYearofpublication = year;
}

int Book::GetYearofpublication() const {
	return mYearofpublication;
}
