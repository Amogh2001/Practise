#ifndef COMPLEXHEADERDEF
#define COMPLEXHEADERDEF

#include <iostream>

class ComplexNo {
private:
	double mRealPart;
	double mImaginaryPart;

public:
	ComplexNo();
	ComplexNo(double x, double y);
	double CalcMod()const;
	double CalcArg()const;
	ComplexNo CalcPow(double n) const;
	ComplexNo& operator=(const ComplexNo& z);
	ComplexNo operator-() const;
	ComplexNo operator+(ComplexNo& z) const;
	ComplexNo operator-(ComplexNo& z) const;
	friend std::ostream& operator<<(std::ostream& output, const ComplexNo& z);
};

#endif
