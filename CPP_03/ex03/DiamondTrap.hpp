/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:15:22 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 15:01:39 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        DiamondTrap();

    public:
        DiamondTrap(std::string name);
        virtual ~DiamondTrap();

        using   ScavTrap::attack; //bringing attack function in the scope of the derived class
        void    whoAmI( void );
};

#endif 