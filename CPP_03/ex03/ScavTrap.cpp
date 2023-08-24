/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:51:54 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 14:23:45 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//default constructor
ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor" << std::endl;
}

//Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->gatekeepMode = false;
	
  std::cout << "ScavTrap Constructor for " << this->name << " was called" << std::endl;
}

//Copy
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
  std::cout << "ScavTrap " << this->name << " copied!\n";
  this->gatekeepMode = copy.gatekeepMode;
}

//Overloaded operator
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
  std::cout << "ScavTrap assignation operator for " << this->name << " was called" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return *this;
}

//Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor for " << this->name << " was called" << std::endl;
}

void ScavTrap::attack(const std::string & target) {
  if (this->energyPoints >= 1) 
  {
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints -= 1; //consume 1 energy point
  } 
  else
    std::cout << "ScavTrap " << this->name << " is out of energy and cannot attack!" << std::endl;
}

void    ScavTrap::guardGate() {
  if (this->gatekeepMode == false)
  {
    std::cout << "ScavTrap " << this->name << " just entered Gate keeper mode." << std::endl;
    gatekeepMode = true;
  }
  else
    std::cout << "ScavTrap " << this->name << " is already in Gate keeper mode." << std::endl;
}