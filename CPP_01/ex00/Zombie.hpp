/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:56:57 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 11:44:37 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
    private:
		std::string	_name;
        
	public:
		~Zombie (void);
		Zombie (std::string	name);
        void	announce( void );
};

Zombie  *newZombie (std::string name);
void    randomChump (std::string name);

#endif