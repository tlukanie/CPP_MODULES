/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:15:26 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 14:43:53 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_name = name;
    
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    
    std::cout << "DiamondTrap constructor for " << this->_name << " was called." << std::endl;
}

//Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor for " << this->_name << " was called" << std::endl;
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "I'm " << this->_name << " DiamondTrap, my ClapTrap name is " << ClapTrap::name << std::endl;
}

