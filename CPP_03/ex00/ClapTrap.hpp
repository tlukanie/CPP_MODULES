/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:55:01 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/23 11:57:29 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    private:
        ClapTrap(); //constructor is private - not to allow creating objects without a name.
        std::string     name; //Name, which is passed as parameter to a constructor
        unsigned int    hitPoints; //Hit points (10), represent the health of the ClapTrap
        unsigned int    energyPoints; //Energy points (10)
        unsigned int    attackDamage; //Attack damage (0)
    public:
        //Orthodox Canonical Form
        ClapTrap( std::string name );
        ~ClapTrap();
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &rightValue);

        void    attack(const std::string &target); //When ClapTrack attacks, it causes its target to lose <attack damage> hit points
        void    takeDamage(unsigned int amount); //Attacking and repairing cost 1 energy point each.
        void    beRepaired(unsigned int amount); //When ClapTrap repairs itself, it gets <amount> hit points back

};

#endif