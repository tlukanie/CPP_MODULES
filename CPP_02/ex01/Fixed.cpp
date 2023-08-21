/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:44:27 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/21 19:17:48 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// EX00 PART
//Constructor
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

/*
Copy constructor is called when creating an object as a copy of another object,
takes a const reference to original as argument.
*/
Fixed::Fixed(const Fixed &rightValue ) {
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(rightValue.getRawBits());
    // *this = rightValue;  //another option
    //returns a reference to current object - "this" is a pointer itself,so returning a dereferenced value of it
}

//Assignment (=) operator overload
Fixed& Fixed::operator=(const Fixed &rightValue) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rightValue) // check if the current object is not the same as the passed object
        this->_fixedPointValue = rightValue.getRawBits(); //// copy the raw value of the passed fixed point number to the current object
    return *this;
}

int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue; //return the raw value of the fixed point number
}

void    Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw; //set the raw value of the fixed point number
}

//Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


//EX01 PART
//Constructor with int parameter
Fixed::Fixed(const int intNbr) {
    std::cout << "Int constructor called" << std::endl;
    _fixedPointValue = intNbr << _fractionalBits; // shift left to get the fixed point value
}

//Constructor with float parameter
Fixed::Fixed(const float floatNbr) {
    std::cout << "Float constructor called" << std::endl;
    _fixedPointValue = roundf(floatNbr * (1 << _fractionalBits)); // shift left to get the fixed point value and round it to the nearest integer value using roundf from cmath library 
}

//convert the fixed point number to a float
float Fixed::toFloat(void) const {
    return static_cast<float>(_fixedPointValue) / (1 << _fractionalBits); // shift right to get the float value from the fixed point value
}

//convert the fixed point value to an int
int Fixed::toInt(void) const {
    return _fixedPointValue >> _fractionalBits; // shift right to get the int value from the fixed point value
}

//overload the insertion operator to output a float representation of the fixed point number
std::ostream &operator<<(std::ostream& strm, const Fixed& fixedNbr) {
    strm << fixedNbr.toFloat();
    return strm;
}