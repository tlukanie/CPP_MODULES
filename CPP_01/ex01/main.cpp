/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:18:06 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 12:43:48 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 10; 
    std::string name = "42oer"; 

    Zombie* newHorde = zombieHorde(N, name); 
    for (int i = 0; i < N; i++) {
        newHorde[i].announce(); 
    }
    delete[] newHorde;

    return 0;
}