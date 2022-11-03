#include <iostream>
#include <string>
#include <cassert>
#include <cstring>
using namespace std;

int main(int argc, char* argv[])
{
	string name;
	cout << "Enter name\n";
	getline(cin, name);
	assert(strlen(name)< 5);
	cout << "Name is" << name << "\n";

	return 0;
}
