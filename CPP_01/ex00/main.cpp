/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:01:59 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 12:03:21 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    std::string zombieName;

    std::cout << "Creating zombie on the stack from the randomChump() function..." << std::endl;
    std::cout << "Enter stack-zombie name: " << std::flush;
    std::cin >> zombieName;
    randomChump(zombieName);

    std::cout << "Creating zombie on the heap from newZombie() function." << std::endl;
    std::cout << "Enter heap-zombie name: " << std::flush;
    std::cin >> zombieName;

    Zombie *heapZombie = newZombie(zombieName);
    heapZombie->announce();
    delete heapZombie;

    return 0;
}