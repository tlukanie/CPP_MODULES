/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:54:56 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 13:55:03 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {
    std::cout << "\033[32mScavTrap\033[0m" << std::endl;

    std::cout << "\033[35mConstructing...\033[0m" << std::endl;
    ScavTrap scavTrap1 ("Dirty Willy");
    ScavTrap scavTrap2("Nasty Bob");

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    scavTrap1.attack("Nasty Bob");
    scavTrap1.beRepaired(15);
    scavTrap1.takeDamage(30);
    scavTrap1.takeDamage(45);
    scavTrap1.beRepaired(60);
    scavTrap1.guardGate();
    scavTrap1.guardGate();
    scavTrap1.attack("Nasty Bob");
    scavTrap2.attack("Dirty Willy");
    scavTrap2.beRepaired(22);
    scavTrap2.takeDamage(7);
    scavTrap2.beRepaired(1);
    std::cout << "\033[35mDestructing...\033[0m" << std::endl;
    return 0;
}