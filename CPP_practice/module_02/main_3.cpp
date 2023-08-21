/*
Canonical form
It includes:
A default constructor
A default destructor
A copy constructor
A assignation operator
*/

#include "Sample_3.hpp"

int main(){
	Sample instance1;
	Sample instance2(42);
	Sample instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}