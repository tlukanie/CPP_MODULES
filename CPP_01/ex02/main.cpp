/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:48:16 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/05 13:08:20 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string brainString = "HI THIS IS BRAIN";
    std::string *stringPTR = &brainString;
    std::string &stringREF = brainString;

    // print memory addresses
    std::cout << "Memory address of string: " << &brainString << std::endl;
    std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

    //print the values
    std::cout << "Value of string: " << brainString << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;

    return (0);
}