#include <iostream>
#include "constr_destr_6.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	main(void)
{
	// the line below instantiate an instance
	// code in constructor will also run (to initialise data for instance)
	Sample	instance;
	return (0);
	// destructor is called when the instance goes out of scope
}