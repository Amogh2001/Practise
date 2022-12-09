#include "Guest.hpp"
#include "SpecialGuest.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
	Guest* p_g1 = new Guest;
	Guest* p_g2 = new Guest;
	Guest* p_g3 = new SpecialGuest;

	p_g1 -> noOfNights = 3;
	p_g1 -> telebill = 0.00;
	p_g2 -> noOfNights = 3;
	p_g2 -> telebill = 0.00;
	p_g3 -> noOfNights = 3;
	p_g3 -> telebill = 0.00;

	std::cout << "Bill for guest 1= " << p_g1->CalcBill() << "\n";
	std::cout << "Bill for guest 2= " << p_g2->CalcBill() <<"\n";
	std::cout << "Bill for guest 3= " << p_g3->CalcBill() <<"\n";
	delete p_g1;
	delete p_g2;
	delete p_g3;
	return 0;
}

