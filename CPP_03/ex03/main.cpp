/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:54:56 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 14:51:45 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main() {
    std::cout << "\033[32mDiamondTrap\033[0m" << std::endl;

    std::cout << "\033[35mConstructing...\033[0m" << std::endl;
    DiamondTrap dmTr1("ScaryJohn");
    DiamondTrap dmTr2("SlipperyMonika");

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    dmTr1.attack("SlipperyMonika");
    dmTr2.takeDamage(35);
    dmTr1.whoAmI();
    dmTr2.whoAmI();
    dmTr2.beRepaired(99);
    dmTr2.attack("ScaryJohn");
    dmTr2.whoAmI();
    
    std::cout << "\033[35mDestructing...\033[0m" << std::endl;
    return 0;
}