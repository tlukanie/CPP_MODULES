/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:02:35 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/19 20:20:01 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedForLosers.hpp"

int main (int argc, char *argv[])
{
    if (argc == 4)
    {
        SFLfile file1(argv[1]);
        file1.replacer(argv[2], argv[3]);
    }
    else
    {
        std::cerr << "Error: Bad arguments" <<  std::endl;
		std::cerr << "Usage: ./SedForLosers <filename> <string_to_find> <str_to_replace_with>" << std::endl;
		return 1;
    }
    return 0;
}