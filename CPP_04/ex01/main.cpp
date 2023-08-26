/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:56:57 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/26 18:53:55 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    std::cout << "\033[32mPolymorphism with Brain\033[0m" << std::endl;
    std::cout << std::endl;

    std::cout << "\033[35mConstructing and allocating Animals...\033[0m" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Dog d1;
    Dog d2;

    Cat c1;
    Cat c2;

    std::cout << "\033[35mTesting...\033[0m" << std::endl;
    d1.checkBrain();
    d2.checkBrain();
    std::cout << std::endl;
    c1.checkBrain();
    c2.checkBrain();
    std::cout << std::endl;
    std::cout << "\033[35mChecking copies...\033[0m" << std::endl;
    Dog &d1_ref = d1;
    Cat &c1_ref = c1;
    Dog d1_copy(d1_ref);
    Cat c1_copy(c1_ref);
    std::cout << "dog ref and copy" << std::endl;
    d1_ref.checkBrain();
    d1_copy.checkBrain();
    std::cout << "cat ref and copy" << std::endl;
    c1_ref.checkBrain();
    c1_copy.checkBrain();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "\033[35mDestructing and deleting Animals...\033[0m" << std::endl;
    delete j;//test for the leaks
    delete i;

    std::cout << std::endl;
    std::cout << "\033[35mConstructing and allocating array of Animals...\033[0m" << std::endl;
    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    //std::cout << "\033[35mTesting...\033[0m" << std::endl;
    

    std::cout << "\033[35mDestructing and deleting array of Animals...\033[0m" << std::endl;
    for (int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}