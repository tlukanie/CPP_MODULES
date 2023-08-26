/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:57 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 14:11:53 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "\033[32mPolymorphism\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << "\033[32mANIMAL\033[0m" << std::endl;

    std::cout << "\033[35mConstructing and allocating Animals...\033[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    std::cout << "\033[35mDestructing and deleting Animals...\033[0m" << std::endl;
    delete  meta;
    delete  j;
    delete  i;

    std::cout << std::endl;
    std::cout << "\033[32mWRONG ANIMAL\033[0m" << std::endl;
    std::cout << "\033[35mConstructing and allocating Wrong Animal and Wrong Cat...\033[0m" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

    std::cout << "\033[35mDestructing and deleting Animal and Wrong Cat...\033[0m" << std::endl;
    delete wrongCat;
    delete wrongAnimal;

    return 0;
}