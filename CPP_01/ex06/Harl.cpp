/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:41:54 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/20 13:56:39 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//Constructor
Harl::Harl(){};

void Harl::debug(void) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. \nI really do!\n" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::complain(std:: string level) {
    ptr_func  functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int lvl = 0;
    while (lvl < 4 && levels[lvl].compare(level))
        lvl++;
    switch (lvl)
    {
        case    0: 
            (this->*functions[0])();
        case    1: 
            (this->*functions[1])();
        case    2: 
            (this->*functions[2])();
        case    3: 
            (this->*functions[3])();
            break ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

//Destructor
Harl::~Harl(){};