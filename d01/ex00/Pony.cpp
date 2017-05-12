/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 16:48:44 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 17:24:46 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) {
	this->_name = name;
	std::cout << "New Pony " << this->_name << " was created" << '\n';
	return ;
}

Pony::~Pony() {
	std::cout << "Pony " << this->_name << " was destroyed" << '\n';
	return ;
}

std::string	Pony::getName(void) {
	return this->_name;
}
