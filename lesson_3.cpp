#include <iostream>
// variables
// universal func is "int main"
int xxx() {
	int a, b; // we have empty state variables (type integer) with same type --> use "," 
	int num = 10;
	std::cout << "Write variable a: ";
	std::cin >> a; // "c in" input data and write it in variable a
	// cout << - output; cin >> - record
	std::cout << "Write variable b: ";
	std::cin >> b;
	std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
	std::cout << "a + b: " << a + b << std::endl;

	return 0;
}




