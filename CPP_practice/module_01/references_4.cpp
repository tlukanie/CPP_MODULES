/*
References are aliases for existing variables. 
It is a pointer that is constant and always dereferenced and never void
*/
/*
Reference

A way for us to reference an existing variable. But pointer can be pointing to a non-existing address
References are not new variables. they don't really occupy memory or have storage
int& ref = a; & is part of the type. We actually created an alias
When you pass a value to a function, you are passing a copy of the value. For the destination function to change the value, you need to pass the memory address of that variable (using a reference or a pointer)
*value++; Because of the order of operation, it will increment first and then dereference it. What's correct is to dereference first and increment it later - (*value)++
If you can, use reference and it will make the source code looks cleaner
Once you define a reference, you can't change what a reference is
References vs. pointer

You can't change where the reference is pointing to. It will always point to the same variable
You can't create a reference and let it point to nothing (uninitialised reference). Because it is constant, you can't point to something else later. But a reference can't point to nothing
Advantage: when you have a reference, you are sure that it's pointing to something
Reference is like a dereferenced pointer. So you don't need to add any symbol to access it
References are complimentary to pointers but they don't replace pointers. However, you can't have a reference and not initialise it to something. In comparison, using a pointer, you can point it to something that does not exist in the beginning, and change what it points to later

Pointers and references are essentially the same thing, regarding how the computer will do with them. Pointers are more flexible than references. If something should always exist and never change, use a references. But if it should not always exist and can change, use a pointer.
*/

#include <iostream>

int	main()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;
	// the reference will be pointing to the variable
	// from this point on, you can't change what your reference is pointing to

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	return (0);
}