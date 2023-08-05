/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:03:48 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 11:41:48 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Creates zombie object on the stack and calls announce function
void randomChump(std::string name) {
    // Creating a new zombie object on the stack
    Zombie zombie(name);
    //Zombie announces itself
    zombie.announce();
}