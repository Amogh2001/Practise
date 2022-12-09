#ifndef ECLASSDEF
#define ECLASSDEF

class EClass {
private:
	double var1;
	double var2;

public:
	EClass(double mem1, double mem2);
	double GetMinimum() const;
	friend double GetMaximum(const EClass& ex_class);
};

#endif
