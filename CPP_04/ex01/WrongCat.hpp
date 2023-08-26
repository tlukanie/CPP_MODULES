/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:52 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 13:06:41 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void); //default constructor
        ~WrongCat(); //destructor
        WrongCat(const WrongCat &copy); //copy constructor
		WrongCat &operator=(WrongCat const &rightValue); //assiging operator

        void   makeSound(void) const;
};

#endif