/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:34:05 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 18:34:54 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {}

HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack(void) const {
    if (_weapon) {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl; //if the weapon pointer is not null
    } else {
        std::cout << _name << " attacks without weapon " << std::endl;
    }
}