#include "EClass.hpp"

EClass::EClass(double mem1, double mem2) {
	var1 = mem1;
	var2 = mem2;
}

double EClass::GetMinimum() const {
	if(var1 < var2) {
		return var1;
	}
	else 
		return var2;
}

double GetMaximum(const EClass& EXClass) {
	if(EXClass.var1 > EXClass.var2) {
		return EXClass.var1;
	}
	else
		return EXClass.var2;
}
