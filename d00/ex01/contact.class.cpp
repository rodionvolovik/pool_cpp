/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 19:40:27 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/10 15:23:07 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <climits>
#include "contact.class.hpp"

		Contact::Contact(void) {
	return;
}

		Contact::~Contact(void) {
	return;
}

void		Contact::addContact(void) {
	this->_id = Contact::_nbcontact;
	std::cout << "First name: ";
	std::cin >> this->_fname;
	std::cin.clear();
	std::cout << "Last name: ";
	std::cin >> this->_lname;
	std::cin.clear();
	std::cout << "Nickname: ";
	std::cin >> this->_nick;
	std::cin.clear();
	std::cout << "Login: ";
	std::cin >> this->_login;
	std::cin.clear();
	std::cout << "Post address: ";
	std::cin >> this->_post;
	std::cin.clear();
	std::cout << "Email address: ";
	std::cin >> this->_email;
	std::cin.clear();
	std::cout << "Phone number: ";
	std::cin >> this->_phone;
	std::cin.clear();
	std::cout << "Birth date: ";
	std::cin >> this->_bdate;
	std::cin.clear();
	std::cout << "Favourite meal: ";
	std::cin >> this->_favmeal;
	std::cin.clear();
	std::cout << "Underwear color: ";
	std::cin >> this->_uwcolor;
	std::cin.clear();
	std::cout << "Darkest secret: ";
	std::cin.clear();
	std::cin >> this->_secret;
	Contact::_nbcontact++;
	return ;
}

void		Contact::printShrtContact(void) {
	std::cout << std::setw(10) << this->_id << '|';
	Contact::_maxstrlen(this->_fname);
	Contact::_maxstrlen(this->_lname);
	Contact::_maxstrlen(this->_nick);
	std::cout << std::endl;
}

void		Contact::printContact(void) {
	std::cout << "First name: " << this->_fname << std::endl;
	std::cout << "Last name: " << this->_lname << std::endl;
	std::cout << "Nickname: " << this->_nick << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Post address: " << this->_post << std::endl;
	std::cout << "Email address: " << this->_email << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Birth date: " << this->_bdate << std::endl;
	std::cout << "Favourite meal: " << this->_favmeal << std::endl;
	std::cout << "Underwear color: " << this->_uwcolor << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
	return ;
}

void		Contact::_maxstrlen(std::string str) {
	if (str.length() <= 9)
		std::cout << std::setw(10) << str << '|';
	else
		std::cout << str.substr(0, 9) << ".|";
	return;
}

int			Contact::getNbContact(void) {
	return Contact::_nbcontact;
}

int	Contact::_nbcontact = 0;
