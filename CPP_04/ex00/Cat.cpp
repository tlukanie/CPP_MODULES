/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:40:53 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 13:53:06 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << this->type << " constructor was called" << std::endl;
}

//copy constructor
Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//assignement operator
Cat &Cat::operator=(Cat const &rightValue)
{
    std::cout << this->type << " assignment operator was called" << std::endl;
	this->type = rightValue.type;
	return *this;
}

Cat::~Cat( void )
{
    std::cout << this->type << " destructor was called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow! Meow! Meow!" << std::endl;
}