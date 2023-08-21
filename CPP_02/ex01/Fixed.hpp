/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:44:30 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/21 19:00:09 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed(); //default constructor ex00 
    Fixed(const int intNbr); //constructor with int parameter ex01
    Fixed(const float floatNbr); //constructor with float parameter ex01
    Fixed(const Fixed &rightValue); //copy constructor ex00
    Fixed &operator=(const Fixed &rightValue); //copy assignement operator overload ex00
    ~Fixed(); //destructor ex00

    int     getRawBits(void) const; // returns the raw value of the fixed point value ex00
    void    setRawBits(int const raw); //sets the raw value of the fixed point number ex00
    float   toFloat(void) const; //ex01
    int     toInt(void) const; //ex01
};

//overload the insertion operator to output a float representation of the fixed point number
std::ostream &operator<<(std::ostream &strm, Fixed const &fixedNbr);

#endif