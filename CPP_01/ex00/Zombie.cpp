/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:02:20 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 11:26:49 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Constructor
Zombie::Zombie(std::string name) : _name(name) {
    std::cout << "Zombie " << _name << " created!" << std::endl;
}

// Destructor
Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " destroyed!" << std::endl;
}
