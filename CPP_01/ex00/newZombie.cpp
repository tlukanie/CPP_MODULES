/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:03:44 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 11:39:47 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates and returns a new zombie on the heap
Zombie* newZombie(std::string name) {
    // Allocating a new zombie object on the heap
    Zombie* zombie = new Zombie(name);
    return zombie;
}