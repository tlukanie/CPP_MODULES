/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedForLosers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:02:44 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/19 20:43:49 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedForLosers.hpp"

SFLfile::SFLfile(std::string filename) : infile(filename)
{
    this->outfile = this->infile + ".replace";
}

SFLfile::~SFLfile(void){}

void SFLfile::replacer(std::string toFind, std::string toReplace)
{
    size_t pos = 0;
	std::ifstream inputFile(this->infile.c_str());
    if (inputFile.is_open()) {
        std::string text;
        std::getline(inputFile, text, '\0');
        if (text.empty())
		{
			std::cerr << "Error: File is empty" << std::endl;
			return ;
		}
		while (true) 
		{
			pos = text.find(toFind, pos);
			if (pos == std::string::npos)
				break;
			text.erase(pos, toFind.length());
			text.insert(pos, toReplace);
			pos += toReplace.length();
		}
		std::ofstream edited(outfile.c_str());
		edited << text;
		inputFile.close();
		edited.close();
		std::cout <<  "File successfully edited" << std::endl;
    }
	else
		std::cerr <<  "Error: Can't open file or the file is empty" << std::endl;
    }