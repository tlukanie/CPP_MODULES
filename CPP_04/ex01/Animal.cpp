/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:25:20 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 13:39:31 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//default constructor 
Animal::Animal() : type("Animal")
{
    std::cout << this->type << " default constructor  was called" << std::endl;
}

//constructor
Animal::Animal(const std::string &typeA) : type(typeA)
{
    std::cout << this->type << " type constructor  was called" << std::endl;
}

//copy constructor
Animal::Animal(const Animal &copy) : type(copy.type) {
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//destructor
Animal::~Animal(void) {
    std::cout << this->type << " destructor was called" << std::endl;
}

//assignement operator
Animal & Animal::operator=(Animal const &rightValue)
{
    std::cout << this->type << " assignment operator was called" << std::endl;
	this->type = rightValue.type;
	return *this;
}

std::string    Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal makeSound() function was called" << std::endl;
}
