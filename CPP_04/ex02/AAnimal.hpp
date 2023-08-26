/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:25:10 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 19:03:58 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal(void);   //default constructor
        AAnimal(const std::string &typeA); //constructor
        AAnimal(const AAnimal &copy);   //copy constructor
        AAnimal &operator=(const AAnimal &rightValue); //assiging operator
        virtual ~AAnimal(); //destructor, make your destructor virtual if your class has any virtual functions

        std::string getType() const;
        virtual void makeSound() const = 0;
};

/*
By marking the function in the base class as virtual, you have the possibility of overriding this function in the derived class. 
This is key to allow polymorphism to work
*/

/*
Interface & pure virtual functions (virtual keyword + "= 0")
"= 0" makes a virtual function a pure virtual function

It allows us to define a function in the base class that does not have an implementation, 
and force subclasses to implement that function

An interface only contains unimplemented methods and acts as a template. 
It also makes it impossible to instantiate that class. 
We must instantiate a subclass that has the functions implemented. 
A derived class can only be instantiated when it implements all of the pure virtual functions
*/

#endif