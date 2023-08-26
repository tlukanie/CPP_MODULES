/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:25:10 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 13:34:27 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal(void);   //default constructor
        Animal(const std::string &typeA); //constructor
        Animal(const Animal &copy);   //copy constructor
        Animal &operator=(const Animal &rightValue); //assiging operator
        virtual ~Animal(); //destructor, make your destructor virtual if your class has any virtual functions

        std::string getType() const;
        virtual void makeSound() const;
};

/*
By marking the function in the base class as virtual, you have the possibility of overriding this function in the derived class. 
This is key to allow polymorphism to work
*/

#endif