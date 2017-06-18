/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:48 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/17 19:06:53 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/SpaceInvaders.hpp"

SpaceInvaders::SpaceInvaders(std::string type, int hp) : _type(type), _hp(hp) {
	_velocity = 0;
	_cooX = 0.0;
	_cooY = 0.0;
	return ;
}

SpaceInvaders::SpaceInvaders(const SpaceInvaders &rhs) {
	if (this != &rhs) {
		_type = rhs.getType();
		_velocity = rhs.getVelocity();
		_cooX = rhs.getCoordX();
		_cooY = rhs.getCoordY();
		_hp = rhs.getHP();
	}
	return ;
}

SpaceInvaders::~SpaceInvaders(void) {
	return ;
}

std::string	SpaceInvaders::getType(void) const {
	return _type;
}

int			SpaceInvaders::getVelocity(void) const {
	return _velocity;
}

float		SpaceInvaders::getCoordX(void) const {
	return _cooX;
}

float		SpaceInvaders::getCoordY(void) const {
	return _cooY;
}

int			SpaceInvaders::getHP(void) const {
	return _hp;
}

void		SpaceInvaders::getDamage(int amount) {
	if ((_hp -= amount) < 0)
		_hp = 0;
}

void		SpaceInvaders::setCoordX(float x) {
	_cooX = x;
}

void		SpaceInvaders::setCoordY(float y) {
	_cooY = y;
}

void		SpaceInvaders::getInfo(void) {
	std::cout << "Unit info" << std::endl;
	std::cout << "=== type: " << _type << std::endl;
	std::cout << "=== velocity: " << _velocity << std::endl;
	std::cout << "=== cooX: " << _cooX << std::endl;
	std::cout << "=== cooY: " << _cooY << std::endl;
	std::cout << "=== hp: " << _hp << std::endl;
}

void		SpaceInvaders::setHP(int amount) {
	if ((_hp = amount) < 0)
		_hp = 0;
}
