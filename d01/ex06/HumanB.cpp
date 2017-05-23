/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 12:47:34 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 13:19:22 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string	name) : _name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) {
	std::cout << this->_name;
	std::cout << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
