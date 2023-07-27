/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:33:30 by tlukanie          #+#    #+#             */
/*   Updated: 2023/07/27 12:55:09 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    int i = 1;
    int j = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        while (argv[i]) {
            j = 0;
			while (argv[i][j]){
				std::cout << (char) toupper(argv[i][j]);
                j++;
            }
            if (i < argc - 1)
				std::cout << ' ';
            i++;
        }
    }
    std::cout << std::endl;
	return (0);
}