/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:44 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 14:15:06 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal(void);   //default constructor
        WrongAnimal(const std::string &typeA); //constructor
        WrongAnimal(const WrongAnimal &copy);   //copy constructor
        WrongAnimal &operator=(const WrongAnimal &rightValue); //assiging operator
        virtual ~WrongAnimal(); //destructor, make your destructor virtual if your class has any virtual functions

        std::string getType() const;
        void makeSound() const; //virtual keyword is missing
};

#endif

/* SUBJECT REQUIREMENT
To ensure you understood how it works, implement a WrongCat class that inherits
from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
in the code above, the WrongCat should output the WrongAnimal sound
*/