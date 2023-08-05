/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:33:55 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 18:16:37 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &weapon) : _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack(void) const {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl; 
}