/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:36:44 by tlukanie          #+#    #+#             */
/*   Updated: 2023/08/04 11:22:44 by tlukanie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>


class Contact {
	private:
		std::string	_id;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phone;
		std::string	_secret;
	public:
		Contact(void);
		~Contact(void);
		void		set_contact(int id);
		std::string	get_id(void);
		std::string	get_firstname(void);
		std::string	get_lastname(void);
		std::string	get_nickname(void);
		std::string	get_phone(void);
		std::string	get_secret(void);
};

class Phonebook {
	private:
		void	display_table(void);
		Contact	_contacts[8];
	public:
		Phonebook(void);
		~Phonebook(void);
		int		index;
		void	add(void);
		void	search(void);
};

#endif