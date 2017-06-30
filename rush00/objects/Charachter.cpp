/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 18:31:27 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 03:40:16 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Charachter.hpp"

# define STANDART_ATTACK 	30
# define BASE_ARMOR			30

int	Charachter::_maxarmor = 100;
int	Charachter::_maxhp = 100;

Charachter::Charachter(void) : SpaceInvaders("player1", 100) {
	_armor = BASE_ARMOR;
	_weapon = new Weapon("laser", 20);
	return ;
}

Charachter::Charachter(const Charachter &rhs) : SpaceInvaders(rhs) {
	if (this != &rhs) {
		_maxhp = rhs._maxhp;
		_armor = rhs._armor;
		_maxarmor = rhs._maxarmor;
		_weapon = rhs._weapon;
	}
	return ;
}

Charachter::~Charachter(void) {
	return ;
}

int		Charachter::getArmor(void) {
	return _armor;
}

void	Charachter::getDamage(int amount) {
	if (amount > _armor) {
		SpaceInvaders::getDamage(amount - _armor);
		_armor = 0;
	} else {
		_armor -= amount;
	}
}

void	Charachter::armOn(Weapon &rhs) {
	this->_weapon = &rhs;
}

void	Charachter::restoreArmor(int amount) {
	if ((_armor += amount) > Charachter::_maxarmor)
		_armor = 100;
}

void	Charachter::restoreHP(int amount) {
	if (this->getHP() + amount > Charachter::_maxhp)
		this->setHP(100);
}

void	Charachter::getInfo(void) {
	SpaceInvaders::getInfo();
	std::cout << "=== armor: " << _armor << '\n';
	if (_weapon == NULL) {
		std::cout << "=== No weapon armored" << '\n';
	} else {
		std::cout << "=== weapon: " << _weapon->getType() << '\n';
	}
}