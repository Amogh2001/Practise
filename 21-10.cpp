#include <iostream>
#include "Book.hpp"

int main(int argc, char* argv[]) {
	Book my_favourite_book;

	my_favourite_book.author = "T E Lawrence";
	my_favourite_book.title = "The Mint";
	my_favourite_book.publisher = "Bantam";
	my_favourite_book.price = 199;
	my_favourite_book.format = "Paperback";
	my_favourite_book.SetYearofpublication(1955);

//	std::cout << "Year of publication of " << my_favourite_book.title << " is " << my_favourite_book.GetYearofpublication() << "\n";
	Book another_book(my_favourite_book);

	Book an_extra_book("The Magic");


	return 0;
}
