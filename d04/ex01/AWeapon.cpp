/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:02:45 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:59:09 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(string const &name, int apcost, int damage) : _name(name), _ap(apcost), _damage(damage) {
	return ;
}

AWeapon::AWeapon(const AWeapon &obj) : _name(obj.getName()), _ap(obj.getAP()), _damage(obj.getDamage()) {
	return ;
}

AWeapon::~AWeapon(void) {
	return ;
}

string const	AWeapon::getName(void) const {
	return _name;
}

int		AWeapon::getAP(void) const {
	return _ap;
}

int		AWeapon::getDamage(void) const {
	return _damage;
}

ostream	&operator<<(ostream &os, const AWeapon &obj) {
	os << ">man\tInformation about " << obj.getName() << endl;
	os << ">\tAP cost: " << obj.getAP() << endl;
	os << ">\tDamage: " << obj.getDamage() << endl;
	return os;
}
