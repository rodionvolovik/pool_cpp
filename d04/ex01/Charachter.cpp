/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:24:11 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 04:08:08 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Charachter.hpp"

Character::Character(string const &name) : _name(name), _ap(40) {
	return ;
}

Character::Character(const Character &obj) : _name(obj.getName()), _ap(40) {
	return ;
}

Character::~Character(void) {
	return ;
}

void	Character::recoverAP(void) {
	_ap = 40;
	return ;
}

void	Character::equip(AWeapon *weapon) {
	_weapon = weapon;
	return ;
}

void	Character::attack(Enemy *enemy) {
	if (_weapon && _ap >= _weapon->getAP()) {
		if ((_ap -= _weapon->getAP()) < 0)
			_ap = 0;
		enemy->takeDamage(_weapon->getDamage());
		cout << _name << " attacks "<< enemy->getType() <<" with a " << _weapon->getName() << endl;
		_weapon->attack();
		if (enemy->getHP() <= 0)
			enemy->~Enemy();
	}
	return ;
}

string const	Character::getName(void) const {
	return _name;
}

int		Character::getAP(void) const {
	return _ap;
}

string	Character::getWeapon(void) const {
	if (_weapon)
		return _weapon->getName();
	return "";
}

ostream	&operator<<(ostream &os, const Character &obj) {
	os << obj.getName() << " has " << obj.getAP() << " AP ";
	if (obj.getWeapon() != "")
		os << " and wields a " << obj.getWeapon() << endl;
	else
		os << " and is unarmed." << endl;
	return os;
}



// zaz has 40 AP and is unarmed$
// * click click click *$
// zaz has 40 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Power Fist$
// * pschhh... SBAM! *$
// zaz has 32 AP and wields a Power Fist$
// zaz has 32 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// zaz has 27 AP and wields a Plasma Rifle$
// zaz attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// * SPROTCH *$
// zaz has 22 AP and wields a Plasma Rifle$
