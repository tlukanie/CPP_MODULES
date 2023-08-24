/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:54:56 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/24 13:55:14 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    std::cout << "\033[32mClapTrap\033[0m" << std::endl;

    std::cout << "\033[35mConstructing...\033[0m" << std::endl;
    ClapTrap clapTrap1 ("Dirty Willy");
    ClapTrap clapTrap2("Nasty Bob");

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    clapTrap1.attack("Nasty Bob");
    clapTrap1.takeDamage(10);
    clapTrap1.takeDamage(10);
    clapTrap1.beRepaired(8);
    clapTrap1.attack("Nasty Bob");
    clapTrap2.beRepaired(6);
    for (int i = 0; i < 15; i++)
        clapTrap2.attack("Dirty Willy");
    clapTrap2.beRepaired(2);
    std::cout << "\033[35mDestructing...\033[0m" << std::endl;
    return 0;
}