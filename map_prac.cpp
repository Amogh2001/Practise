#ifndef EXCEPTIONHEADERDEF
#define EXCEPTIONHEADERDEF

#include <string>

class Exception {
private:
	std::string mTag, mProb;

public:
	Exception(std::string tagString, std::string probString);
	void PrintDebug() const;
};
#endif


