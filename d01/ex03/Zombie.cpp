/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 20:09:49 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/13 15:07:04 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
	this->_name = "empty";
	this->_type = "empty";
	std::cout << "Zombie constructed" << '\n';
	return ;
}


Zombie::Zombie(std::string name, std::string type) {
	this->_name = name;
	this->_type = type;
	std::cout << "Zombie " << name << " of type " << type << " constructed" << '\n';
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " of type " << this->_type << " destructed" << '\n';
	return ;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")"
				<< "> Braiiiiiiinnnssss..." << std::endl;
}
