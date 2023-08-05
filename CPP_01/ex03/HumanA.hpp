/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:34:00 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 18:08:16 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name; // name of the human
        Weapon&     _weapon; // reference to a Weapon object, weapon of the human
        HumanA();

    public:
        HumanA(std::string name, Weapon& weapon); // constructor initializes the name and the weapon
        ~HumanA(void);

        void    attack(void) const;
};

#endif