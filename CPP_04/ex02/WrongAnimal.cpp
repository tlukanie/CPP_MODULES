/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:39 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 14:16:02 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//default constructor 
WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << this->type << " default constructor  was called" << std::endl;
}

//constructor
WrongAnimal::WrongAnimal(const std::string &typeA) : type(typeA)
{
    std::cout << this->type << " type constructor  was called" << std::endl;
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type) {
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//destructor
WrongAnimal::~WrongAnimal(void) {
    std::cout << this->type << " destructor was called" << std::endl;
}

//assignement operator
WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rightValue)
{
    std::cout << this->type << " assignment operator was called" << std::endl;
	this->type = rightValue.type;
	return *this;
}

std::string    WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makeSound() function was called" << std::endl;
}
