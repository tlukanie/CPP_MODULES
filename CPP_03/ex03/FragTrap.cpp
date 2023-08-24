/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:23:33 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 14:23:40 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//default constructor
FragTrap::FragTrap(void) : ClapTrap(){
	std::cout << "FragTrap default constructor" << std::endl;
}

//Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << "FragTrap Constructor for " << this->name << " was called" << std::endl;
}

//Copy
FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
  std::cout << "FragTrap " << this->name << " copied!\n";
}

//Overloaded operator
FragTrap &FragTrap::operator=(const FragTrap &copy)
{
  std::cout << "FragTrap assignation operator for " << this->name << " was called" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return *this;
}

//Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor for " << this->name << " was called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	std::cout << "Heey! I'm " << this->name << ", high-five me, bro!" << std::endl;
}

