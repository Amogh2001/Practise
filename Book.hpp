#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <string>

class Book {
public:
	Book();
	Book(const Book& otherBook);
	Book(std::string bookTitle);
	std::string author, title, publisher, format;
	int price;
	void SetYearofpublication(int year);
	int GetYearofpublication() const;
private:
	int mYearofpublication;
};

#endif
