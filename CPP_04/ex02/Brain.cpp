/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:07:42 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 18:53:36 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
		this->ideas[i] = "Genious ideas";
    std::cout << "Brain constructor was called and ideas were set" << std::endl;
}

//copy constructor
Brain::Brain(Brain &copy) {
    std::string *copyIdeas = copy.getIdeas();
	this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
		this->ideas[i] = copyIdeas[i];
    std::cout << "Brain copy constructor was called and copied the ideas" << std::endl;
    *this = copy;
}

//assignement operator
Brain &Brain::operator=(Brain const &rightValue)
{
    std::cout << "Brain assignment operator was called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = rightValue.ideas[i];
    }
	return *this;
}

Brain::~Brain( void )
{
    delete [] (this->ideas);
    std::cout << "Brain destructor was called and deleted the preset ideas" << std::endl;
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}