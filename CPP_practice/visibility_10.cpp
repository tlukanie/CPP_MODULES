#include <iostream>
#include "visibility_10.hpp"

// this can also be written with initialisation list
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo = " << this->publicFoo <<std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo = " << this->_privateFoo <<std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	return;
}

int	main(void)
{
	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	// compilation error when you want to access private attributes
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo = " << instance._privateFoo << std::endl;

	instance.publicBar();
	// compilation error when you want to access private function
	// instance._privateBar();

	return (0);
}