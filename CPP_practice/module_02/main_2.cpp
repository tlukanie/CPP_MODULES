/*
Operator overload
Operator overloading enables you to write function members 
that enable the basic operators to be applied to class objects 
(source: Beginning C++). To do this, you write a function that redefines 
each operator that you want to use with your class

Groups operators in C++

Arithmetic operators
Assignment operators
Comparison operators
Logical operators
Bitwise operators
Operator overloading allows you to define or change the behaviour of an 
operator in your program. Operators are essentially just functions

C++ gives you full control on operator overloading, 
however this can lead to a bad use of the language. Only use operator overloading 
when it makes perfect sense

The overload must be related to the natural semantics of the operator. 
There are not many cases with operator overload. Make sure there is a good use 
case for it, otherwise it's easy to make stupid mistakes with it

*/

#include "Integer_2.hpp"
#include <iostream>

int main(){
	Integer x(30);
	Integer y(10);
	Integer z(0);

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	y = Integer(12);
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return 0;
}