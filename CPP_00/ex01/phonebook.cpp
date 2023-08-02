/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:48:13 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/02 18:43:50 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	std::cout << "Welcome to Phonebook!"<<std::endl;
	std::cout << "Use one of the following commands:" << std::endl;
	std::cout << "[ADD] [SEARCH] [EXIT]" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Bye! See you!" << std::endl;
	return ;
}


void	Phonebook::add(void)
{
	int		index;

	index = this->index;
	if (index > 7)
	{
		index = this->index % 8;
		std::cout << std::endl << "WARNING! Contact ["<< index + 1 << "/8] will be replaced !" << std::endl << std::endl;
	}
	this->_contacts[index].set_contact(index);
	this->index++;
	std::cout << std::endl << "Contact ["<< index + 1 << "/8] added !" << std::endl << std::endl;
	return ;
}

void	Phonebook::search(void)
{
	std::string line;
	int			i;

	if (this->index == 0)
	{
		std::cout << "NO CONTACTS!\n";
		return ;
	}
	this->display_table();
	std::cout << "Select an index: ";
	std::getline(std::cin, line);
	if (std::isdigit(line[0]) && line.length() == 1)
	{
		i = std::atoi(line.c_str()) - 1;
		if (i >= this->index || i > 7 || i == -1)
			std::cout << "Error! ID is out of the range!\n";
		else
		{
			std::cout << "First Name: " << this->_contacts[i].get_firstname() << std::endl;
			std::cout << "Last Name: " << this->_contacts[i].get_lastname() << std::endl;
			std::cout << "Nickname: " << this->_contacts[i].get_nickname() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[i].get_phone() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[i].get_secret() << std::endl;
		}
	}
	else
		std::cout << "Error! Invalid ID.\n";
}

static void print_contacts(std::string str)
{
	int	i;
	int	j;

	std::cout << "|";
	i = str.length();
	if (i > 10) 
	{
		for(j = 0; j < 9; j++)
			std::cout << str[j];
		std::cout << ".";
	}
	else
	{
		while (i < 10)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str;
	}
}

void	Phonebook::display_table(void)
{
	int	j;

	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	j = 0;
	while(j < this->index && j < 8)
	{
		print_contacts(this->_contacts[j].get_id());
		print_contacts(this->_contacts[j].get_firstname());
		print_contacts(this->_contacts[j].get_lastname());
		print_contacts(this->_contacts[j].get_nickname());
		std::cout << "|" << std::endl;
		j++;
	}
}

int main(void)
{
	Phonebook 	phonebook;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}

	return 0;
}