#include <iostream>
#include "this_pointer_7.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	// it is possible to call a function from an instance pointer
	this->bar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}

int	main(void)
{
	Sample	instance;

	return (0);
}