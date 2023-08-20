/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:42:03 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/20 13:42:52 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;
    if(argc == 2)
        harl.complain(argv[1]);
    else if (argc > 2)
        std::cerr << "Error! Too many arguments." << std::endl;
    else
        std::cerr << "Error! No arguments provided." << std::endl;
    return (0);
}