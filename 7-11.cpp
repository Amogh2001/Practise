#include "Book.hpp"
#include <iostream>

int main(int argc, char* argv []) {
	EClass example(2.0, 3.0);
	std::cout << "Min val= " <<example.GetMinimum() << "\n";
	std::cout << "Max= " << GetMaximum(example) << "\n";
	return 0;

}

