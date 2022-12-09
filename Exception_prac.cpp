#include "Exception_prac.hpp"
#include <iostream>

Exception::Exception(std::string tagString, std::string probString) {
	mTag = tagString;
	mProb = probString;
}

void Exception::PrintDebug() const {
	std::cerr << "** Error ("<<mTag<<") ** \n";
	std::cerr << "Problem: " << mProb << "\n\n";
}


