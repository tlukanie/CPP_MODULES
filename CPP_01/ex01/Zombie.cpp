/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:18:17 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 12:43:04 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Default constructor
Zombie::Zombie(void) {
	return;
}

// Destructor
Zombie::~Zombie(void) {
    std::cout << "Zombie " << _name << " destroyed!" << std::endl;
}

// Sets the name
void Zombie::setName(std::string name) {
    this->_name = name;
}
