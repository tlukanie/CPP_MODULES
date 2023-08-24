/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:55:06 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 13:37:43 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor" << std::endl;
}

// Constructor
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Constructor for " << name << " was called" << std::endl;
}

//Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for " << name << " was called" << std::endl;
}

//Overloaded operator
ClapTrap &ClapTrap::operator=(const ClapTrap &rightValue)
{
    std::cout << "ClapTrap assignation operator for " << name << " was called" << std::endl;
    this->name = rightValue.name;
    this->hitPoints = rightValue.hitPoints;
    this->energyPoints = rightValue.energyPoints;
    this->attackDamage= rightValue.attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string & target) {
  if (energyPoints >= 1) 
  {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1; //consume 1 energy point
  } else
        std::cout << "ClapTrap " << name << " is out of energy and cannot attack!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints >= amount)
  {
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    hitPoints -= amount; //take the damage
  } 
  else
  {
    std::cout << "ClapTrap " << name << " is dead!" << std::endl;
    hitPoints = 0;
  }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints >= 1)
    {
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
        energyPoints -= 1;
        hitPoints += amount;
    }
    std::cout << "ClapTrap " << name << " is out of energy and cannot be repaired!" << std::endl;
}