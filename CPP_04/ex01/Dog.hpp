/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:46:59 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 18:42:20 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *brain;
    public:
        Dog(void); //default constructor
        ~Dog(); //destructor
        Dog(Dog &copy); //copy constructor
		Dog &operator=(Dog const &rightValue); //assiging operator

        void   makeSound(void) const;
        void   checkBrain(void) const;
        Brain *getBrain(void) const;
};

#endif