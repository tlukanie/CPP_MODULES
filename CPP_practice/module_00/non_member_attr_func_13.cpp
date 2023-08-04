#include <iostream>
#include "non_member_attr_func_13.hpp"

Sample::Sample(void)
{
	std::cout << "(0)Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample(void)
{
	std::cout << "(1)Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

// With member function, CPP will pass as a parameter, an instance of your class
// so this-> can be used

// this pointer is not passed for a non member function, so you can't
// use this-> here
int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

// this is the only way to initialise a non member attribute (static attribute)
// this is initialised without an instance being created
int	Sample::_nbInst = 0;


void f0(void)
{
	Sample instance;

	std::cout << "(2)Number of instances = " << instance.getNbInst() << std::endl;

	return;
}

void f1(void)
{
	Sample instance;

	std::cout << "(3)Number of instances = " << instance.getNbInst() << std::endl;
	f0();

	return;
}

int main(void)
{
	std::cout << "(4)Number of instances = " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "(5)Number of instances = " << Sample::getNbInst() << std::endl;

	return 0;
}