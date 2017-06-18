/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 19:09:10 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/18 12:55:33 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"

Weapon::Weapon(std::string type, int damage) : _type(type), _damage(damage) {
	return ;
}

Weapon::Weapon(const Weapon &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
		_damage = rhs._damage;
	}
}

Weapon::~Weapon(void) {
	return ;
}

std::string	Weapon::getType(void) const {
	return _type;
}

int			Weapon::getDamage(void) const {
	return _damage;
}
