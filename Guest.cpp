#include "Guest.hpp"

double Guest::CalcBill() {
	return telebill + ((double) (noOfNights))*50.0;
}

