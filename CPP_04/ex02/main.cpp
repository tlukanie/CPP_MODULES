/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:57 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 19:12:32 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "\033[32mAbstract Class\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[32mAANIMAL\033[0m" << std::endl;

    std::cout << "\033[35mConstructing and allocating Animals...\033[0m" << std::endl;
    //const AAnimal* meta = new AAnimal(); //object of abstract class is not allowed
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    /*
    Dog d1;
    d1.checkBrain(); */

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    //meta->makeSound();
    std::cout << "\033[35mDestructing and deleting AAnimals...\033[0m" << std::endl;
    //delete  meta;
    delete  j;
    delete  i;
    return 0;
}