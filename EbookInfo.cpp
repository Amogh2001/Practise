#include "Ebook.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
	Ebook book1;
	book1.title = "7POW";
	book1.author = "TEL";
	std::cout << "Title is " << book1.title << " Author is " << book1.author << "\n";
	std::cout << " Format is " << book1.format << "\n" ;

	book1.SetYearofpublication(1922);
	std::cout << "YOP is " << book1.GetYearofpublication() << "\n";

	book1.HiddenURL = "https://www.teehee.org";
	std::cout << "URL is " << book1.HiddenURL << "\n";

	return 0;
}

