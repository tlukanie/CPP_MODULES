/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:46:54 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 18:43:51 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog")
{
    this->brain = new Brain;
    std::cout << this->type << " constructor was called with the NEW brain" << std::endl;
}

//copy constructor
Dog::Dog(Dog &copy) : Animal(copy) {
    this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
    std::cout << this->type << " copy constructor was called" << std::endl;
}

//assignement operator
Dog &Dog::operator=(Dog const &rightValue)
{
    std::cout << this->type << " assignment operator was called (for the NEW brain as well)" << std::endl;
	this->type = rightValue.type;
    if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(rightValue.getBrain()));
	return *this;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << this->type << " destructor was called and DELETEd brain" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof! Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

void Dog::checkBrain(void) const
{
    std::cout << "Heap address of my dog brain is " << static_cast<void*>(this->brain) << std::endl;
    std::cout << "My ideas:" << std::endl;
    for (int i = 0; i < 5; i++)
		std::cout << ((this->brain)->getIdeas())[i] << std::endl;
}