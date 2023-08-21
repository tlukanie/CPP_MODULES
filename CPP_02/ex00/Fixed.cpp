/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:28:25 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/21 17:30:33 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue; //return the raw value of the fixed point number
}

void    Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw; //set the raw value of the fixed point number
}

//Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}