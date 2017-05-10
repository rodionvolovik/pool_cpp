/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 19:32:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/10 13:27:23 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

# define EXIT	"EXIT"
# define ADD	"ADD"
# define SEARCH	"SEARCH"

int		main(void)
{
	Contact		phonebook[8];
	std::string	buf;
	int			nb = 0;

	std::cout << "Welcome to phonebook" << '\n';
	while (buf.compare(EXIT) != 0) {
		std::cout << "There are " << Contact::getNbContact() << " contacts" << '\n';
		std::cout << "You can " << (Contact::getNbContact() >= 8 ? "" : "ADD") << "SEARCH and EXIT" << '\n';
		std::cin >> buf;
		if (buf == ADD) {
			std::cout << "add" << '\n';
		}
		else if (buf == SEARCH) {
			std::cout << "search" << '\n';
		}
		else {
			std::cout << "Please provide right command" << '\n';
			std::cout << "ADD - to add contact" << '\n';
			std::cout << "SEARCH - to search a contact" << '\n';
			std::cout << "EXIT - to exit the program" << '\n';
		}
	}
	return (0);
}
