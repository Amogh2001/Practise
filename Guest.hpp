#ifndef GUESTHEADERDEF
#define GUESTHEADERDEF

#include <string>

class Guest {
public:
	std::string name, roomType, ArrDate;
	int noOfNights;
	double telebill;
	virtual double CalcBill();
};

#endif
