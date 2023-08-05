/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:18:23 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 12:31:25 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    
    private:
        std::string _name;

    public:
        Zombie(); // Default constructor
        ~Zombie(); // Default destructor
        void    announce (void); // Announces zombie
        void    setName(std::string name); // Name setter

};

Zombie*    zombieHorde(int N, std::string name);

#endif 