/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:34:09 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 18:12:09 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    std::string _name; // name of the human
    Weapon* _weapon; // pointer to a Weapon object

public:
    HumanB(const std::string name); // constructor, initializes the name
	~HumanB(void); // destructor
	
    void attack(void) const; // displays an attack message
    void setWeapon(Weapon& weapon); // sets the weapon
};

#endif