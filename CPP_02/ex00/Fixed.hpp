/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:28:35 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/21 17:30:45 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Canonical form includes:
1. A default constructor
2. A default destructor
3. A copy constructor
4. A assignation operator
*/

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue; //stores the fixed point number value
    static const int    _fractionalBits = 8; //stores the number of fractional bits and defining how many bits are reserved 
    //for fractional part of the number

public:
    Fixed(); //default constructor
    Fixed(const Fixed &rightValue); //copy constructor
    Fixed &operator=(const Fixed &rightValue); //copy assignement operator overload
    ~Fixed(); //destructor

    int     getRawBits(void) const; // returns the raw value of the fixed point value
    void    setRawBits(int const raw); //sets the raw value of the fixed point number
};

#endif