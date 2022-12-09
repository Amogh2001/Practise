#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char* argv[]) {
	std::vector<std::string> destinations = {"Paris", "New York", "SIngapore"};
	for( std::string city : destinations ) {
		std::cout << city << "\n";
	}

	for(std::string& r_city : destinations) {
		r_city = r_city + " (modified)";
		std::cout << r_city << "\n";

	}
	for( auto city : destinations) {
		std::cout << city << "\n";
	}
}

