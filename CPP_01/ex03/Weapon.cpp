/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:34:18 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 18:28:20 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// initializes the type using the input and setType()
Weapon::Weapon(std::string type) {
    this->setType(type);
}

// destructor
Weapon::~Weapon() {}

//returns the type by reference
const   std::string& Weapon::getType(void) {
    return this->_type;
}

void    Weapon::setType(std::string type) {
    this->_type = type;
}