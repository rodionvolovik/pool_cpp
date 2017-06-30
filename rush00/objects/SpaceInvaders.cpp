/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:48 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 03:39:22 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/SpaceInvaders.hpp"

SpaceInvaders::SpaceInvaders(std::string type, int hp) : _type(type), _hp(hp) {
	_velocity = VELOCITY;
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

int			SpaceInvaders::getHP(void) const {
	return _hp;
}

void		SpaceInvaders::getDamage(int amount) {
	if ((_hp -= amount) < 0)
		_hp = 0;
}

void		SpaceInvaders::getInfo(void) {
	std::cout << "Unit info" << std::endl;
	std::cout << "=== type: " << _type << std::endl;
	std::cout << "=== velocity: " << _velocity << std::endl;
	std::cout << "=== hp: " << _hp << std::endl;
}

void		SpaceInvaders::setHP(int amount) {
	if ((_hp = amount) < 0)
		_hp = 0;
}

void		SpaceInvaders::setVelocity(int velocity) {
	_velocity = velocity;
}