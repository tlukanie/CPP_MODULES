/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:25:20 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 13:39:31 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//default constructor 
AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << this->type << " default constructor  was called" << std::endl;
}

//constructor
AAnimal::AAnimal(const std::string &typeA) : type(typeA)
{
    std::cout << this->type << " type constructor  was called" << std::endl;
}

//copy constructor
AAnimal::AAnimal(const AAnimal &copy) : type(copy.type) {
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//destructor
AAnimal::~AAnimal(void) {
    std::cout << this->type << " destructor was called" << std::endl;
}

//assignement operator
AAnimal & AAnimal::operator=(AAnimal const &rightValue)
{
    std::cout << this->type << " assignment operator was called" << std::endl;
	this->type = rightValue.type;
	return *this;
}

std::string    AAnimal::getType(void) const
{
    return this->type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal makeSound() function was called" << std::endl;
}
