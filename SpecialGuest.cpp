#include "SpecialGuest.hpp"

double SpecialGuest::CalcBill() {
	return 45.0 + ((double) noOfNights-1)*40.0;
}
