/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:38:30 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 13:06:35 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

					Weapon::Weapon(std::string type) : _type(type) {		
	return ;
}

					Weapon::~Weapon(void) {
	return ;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const	&Weapon::getType(void) const {
	return this->_type;
}
