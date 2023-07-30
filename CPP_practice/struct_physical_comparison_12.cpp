#include <iostream>
#include "struct_physical_comparison_12.hpp"

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

int	Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}

int	main(void)
{
	// physically different but structurally identical instances
	Sample instance1(42);
	Sample instance2(42);

	if (&instance1 == &instance1)
		std::cout << "(1)instance 1 and instance 1 are physically equal" << std::endl;
	else
		std::cout << "(2)instance 1 and instance 1 are not physically equal" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "(3)instance 1 and instance 2 are physically equal" << std::endl;
	else
		std::cout << "(4)instance 1 and instance 2 are not physically equal" << std::endl;

	if (instance1.compare(&instance1) == 0)
		std::cout << "(5)instance 1 and instance 1 are structurally equal" << std::endl;
	else
		std::cout << "(6)instance 1 and instance 1 are not structurally equal" << std::endl;

	if (instance1.compare(&instance2) == 0)
		std::cout << "(7)instance 1 and instance 2 are structurally equal" << std::endl;
	else
		std::cout << "(8)instance 1 and instance 2 are not structurally equal" << std::endl;

	return (0);
}