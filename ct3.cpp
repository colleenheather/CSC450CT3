//===========================================================================
// Name        : ct3 (Critical Thinking 3)
// Author      : Colleen Ammons
// Description : display integers and integer pointers
// Pseudocode  :	int a, b, c
//					int pointer ptr_a, ptr_b, ptr_c
//
//					a, b, c = userInput
//					ptr_a, ptr_b, ptr_c = a, b, c
//					print(a, b, c, ptr_a, ptr_b, ptr_c)
//					delete ptr_a, ptr_b, ptr_c
//
//============================================================================

#include <iostream>

int main() {
	int a, b, c;
	int *ptr_a = new int;
	int *ptr_b = new int;
	int *ptr_c = new int;

	std::cout << "Enter three integer values: ";
	std::cin >> a >> b >> c;

	*ptr_a = a;
	*ptr_b = b;
	*ptr_c = c;

	std::cout << "Value of a: " << a << ", Value at ptr_a: " << *ptr_a << std::endl;
	std::cout << "Value of b: " << b << ", Value at ptr_b: " << *ptr_b << std::endl;
	std::cout << "Value of c: " << c << ", Value at ptr_c: " << *ptr_c << std::endl;

	delete ptr_a;
	delete ptr_b;
	delete ptr_c;

	return 0;
}
