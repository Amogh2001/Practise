#include "ComplexNo.hpp"
#include <iostream>
#include <cmath>

ComplexNo::ComplexNo() {
	mRealPart = 0.0;
	mImaginaryPart = 0.0;
}

ComplexNo::ComplexNo(double x, double y) {
	mRealPart = x;
	mImaginaryPart = y;
}

double ComplexNo::CalcMod() const {
	return sqrt(mRealPart*mRealPart + mImaginaryPart*mImaginaryPart);
}

double ComplexNo::CalcArg() const {
	return atan2( mImaginaryPart, mRealPart);
}

ComplexNo ComplexNo::CalcPow(double n) const {
	double modulus = CalcMod();
	double argument = CalcArg();
	double m_o_r = pow(modulus, n);
	double a_o_r = argument*n;
	double r_part = m_o_r*cos(a_o_r);
	double i_part = m_o_r*sin(a_o_r);
	ComplexNo z(r_part, i_part);
	return z;
}

ComplexNo& ComplexNo::operator =(const ComplexNo& z) {
	mRealPart = z.mRealPart;
	mImaginaryPart = z.ImaginaryPart;
	return *this;
}

ComplexNo ComplexNo::operator-() const;

	ComplexNo w;
	w.mRealPart = -mRealPart;
	w.mImaginaryPart = -mImaginaryPart;
	return w;

}

ComplexNo operator+(const ComeplexNo& z) const {
	
	ComplexNo w;
	w.mRealPart = mRealPart + z.mRealPart;
	w.mImaginaryPart = mImaginaryPart + z.mImaginaryPart;
	return w;
}

ComplexNo operator-(const ComplexNo& z) const {
	ComplexNo w;
	w.mRealPart = mRealPart - z.mRealPart;
	w.mImaginaryPart = mImaginaryPart - z.mImaginaryPart;
	return w;
}

std::ostream& operator<<(std::ostream& output,const ComplexNo& z) {
	output << "(" << z.mRealPart << " ";
	if(z.mImaginaryPart >= 0.0) {
		output << "+ " << z.mImaginaryPart << "i)";
	}
	else {
		output << "- " << z.mImaginaryPart << "i)";
	}	
	return output;
}

	
		















