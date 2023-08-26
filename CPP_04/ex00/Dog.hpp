/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:46:59 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 12:50:27 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void); //default constructor
        ~Dog(); //destructor
        Dog(const Dog &copy); //copy constructor
		Dog &operator=(Dog const &rightValue); //assiging operator

        void   makeSound(void) const;
};

#endif