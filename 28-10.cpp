#include <iostream>
#include <memory>
#include <cassert>

int main(int argc, char* argv[]) {
	
	std::shared_ptr<int> p_x(new int);
	*p_x = 5;

	std::cout << "p_x use count: " << p_x.use_count() << "\n";

	std::shared_ptr<int> p_y = p_x;
			
	std::cout << "p_x use count: " << p_x.use_count() << "\n";

	p_y.reset();


	std::cout << "p_x use count: " << p_x.use_count() << "\n";

	p_x.reset();


	std::cout << "p_x use count: " << p_x.use_count() << "\n";
	return 0;
}
