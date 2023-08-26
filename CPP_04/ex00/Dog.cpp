/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:46:54 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 13:53:42 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->type << " constructor was called" << std::endl;
}

//copy constructor
Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//assignement operator
Dog &Dog::operator=(Dog const &rightValue)
{
    std::cout << this->type << " assignment operator was called" << std::endl;
	this->type = rightValue.type;
	return *this;
}

Dog::~Dog( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof! Woof! Woof!" << std::endl;
}