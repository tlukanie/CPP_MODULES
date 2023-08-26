/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:40:53 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 18:38:05 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    this->brain = new Brain;
    std::cout << this->type << " constructor was called with the NEW brain" << std::endl;
}

//for copy and assigning
Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

//copy constructor
Cat::Cat(Cat &copy) : Animal(copy) {
    this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//assignement operator
Cat &Cat::operator=(Cat const &rightValue)
{
    std::cout << this->type << " assignment operator was called (for the NEW brain as well)" << std::endl;
	this->type = rightValue.type;
    if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(rightValue.getBrain()));
	return *this;
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << this->type << " destructor was called and DELETEd brain" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow! Meow! Meow!" << std::endl;
}

void Cat::checkBrain(void) const
{
    std::cout << "Heap address of my cat brain is " << static_cast<void*>(this->brain) << std::endl;
    std::cout << "My ideas:" << std::endl;
    for (int i = 0; i < 5; i++)
		std::cout << ((this->brain)->getIdeas())[i] << std::endl;
}