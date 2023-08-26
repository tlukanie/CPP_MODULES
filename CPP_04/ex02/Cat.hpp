/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:40:57 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 19:06:36 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain   *brain;
    public:
        Cat(void); //default constructor
        ~Cat(); //destructor
        Cat(Cat &copy); //copy constructor
		Cat &operator=(Cat const &rightValue); //assiging operator

        void   makeSound(void) const;
        void   checkBrain(void) const;
        Brain *getBrain( void ) const;
};

#endif

/*
Note: in a derived class, if your base class has a virtual destructor, your own destructor is automatically virtual. 
You might need an explicitly defined destructor for other reasons, 
but there's no need to redeclare a destructor simply to make sure it is virtual. 
No matter whether you declare it with the virtual keyword, declare it without the virtual keyword, 
or don't declare it at all, it's still virtual.
*/