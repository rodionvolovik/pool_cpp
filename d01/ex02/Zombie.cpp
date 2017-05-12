/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 20:09:49 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 20:48:44 by rvolovik         ###   ########.fr       */
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
	std::cout << "Zombie" << name << " " << type << "constructed" << '\n';
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie destructed" << '\n';
	return ;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")"
				<< "> Braiiiiiiinnnssss..." << std::endl;
}
