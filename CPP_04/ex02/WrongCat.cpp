/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:48 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 14:15:51 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->type << " constructor was called" << std::endl;
}

//copy constructor
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//assignement operator
WrongCat &WrongCat::operator=(WrongCat const &rightValue)
{
    std::cout << this->type << " assignment operator was called" << std::endl;
	this->type = rightValue.type;
	return *this;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "WRONG Meow! WRONG Meow! WRONG Meow!" << std::endl;
}