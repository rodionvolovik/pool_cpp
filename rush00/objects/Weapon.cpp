/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 19:09:10 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 18:16:47 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Weapon.hpp"

Weapon::Weapon(std::string type, int damage) : _type(type), _damage(damage) {
	_bullet = NULL;
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

int			Weapon::shoot(int x, int y, SDL_Surface *screen) {
	_bullet = new Bullet(_damage, x, y);
	_bullet->fire();
	_bullet->update();
	_bullet->draw(screen);
	return _damage;
}

void		Weapon::update(SDL_Surface *screen) {
	if (_bullet != NULL) {
		_bullet->update();
		std::cout << _bullet->getCoordY() << '\n';
		if (_bullet->getCoordY() == 0) {
			_bullet->destroyBullet();
			_bullet = NULL;
			SDL_FillRect(screen, NULL, 0x000000);
		}
		else if (_bullet != NULL) {
		_bullet->draw(screen);
		}
	}
}