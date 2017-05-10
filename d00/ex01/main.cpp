/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 19:32:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/11 00:35:32 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

# define EXIT	"EXIT"
# define ADD	"ADD"
# define SEARCH	"SEARCH"

/*
**	TEXT FORMATTING
*/

# define UNDERLINED		"\e[4;94;47m"
# define BG				"\e[94;47m"
# define ERRORINPUT		"\e[91;47m"
# define NORMAL			"\e[0m"

int		main(void)
{
	Contact		phonebook[8];
	std::string	buf;
	int			nb = 0;

	std::cout << BG << "Welcome to phonebook" << NORMAL << '\n';
	while (buf.compare(EXIT) != 0) {
		std::cin.clear();
		std::cout << BG << "There are " << UNDERLINED << Contact::getNbContact() << " contacts" << NORMAL << '\n';
		std::cout << BG << "You can " << UNDERLINED << (Contact::getNbContact() >= 8 ? "" : "ADD ") << "SEARCH" << BG <<  " and " << UNDERLINED << "EXIT" << NORMAL << '\n';
		std::cin >> buf;
		if (buf == ADD) {
			if (Contact::getNbContact() < 8)
				phonebook[Contact::getNbContact()].addContact();
			else
				std::cout << ERRORINPUT << "Your phonebook is already full" << NORMAL << '\n';
		}
		else if (buf == SEARCH) {
			if (Contact::getNbContact() > 0) {
				for (int i = 0; i < Contact::getNbContact(); i++)
					phonebook[i].printShrtContact();
				std::cout << BG "Provide contact ID to see detailed info" << NORMAL << '\n';
				std::cin >> nb;
				if (std::cin.good() && nb >= 0 && nb < Contact::getNbContact())
					phonebook[nb].printContact();
				else
					std::cout << ERRORINPUT << "No such contact ID" << NORMAL << '\n';
				std::cin.clear();
			}
			else
				std::cout << BG << "There are no contacts added yet" << NORMAL << '\n';
		}
		else if (buf != EXIT) {
			std::cout << ERRORINPUT << "Please provide right command" << '\n';
			std::cout << "ADD - to add contact" << '\n';
			std::cout << "SEARCH - to search a contact" << '\n';
			std::cout << "EXIT - to exit the program" << NORMAL << '\n';
		}
	}
	return (0);
}
