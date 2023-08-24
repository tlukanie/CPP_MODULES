/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:54:56 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 13:58:17 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main() {
    std::cout << "\033[32mFragTrap\033[0m" << std::endl;

    std::cout << "\033[35mConstructing...\033[0m" << std::endl;
    FragTrap fragTrap1 ("Dirty Willy");
    FragTrap fragTrap2("Nasty Bob");

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    fragTrap1.attack("Nasty Bob");
    fragTrap1.beRepaired(15);
    fragTrap1.takeDamage(30);
    fragTrap1.takeDamage(45);
    fragTrap1.highFivesGuys();
    fragTrap1.beRepaired(60);
    fragTrap1.attack("Nasty Bob");
    fragTrap2.attack("Dirty Willy");
    fragTrap2.beRepaired(22);
    fragTrap2.highFivesGuys();
    fragTrap2.takeDamage(7);
    fragTrap2.beRepaired(1);
    fragTrap2.highFivesGuys();
    std::cout << "\033[35mDestructing...\033[0m" << std::endl;
    return 0;
}