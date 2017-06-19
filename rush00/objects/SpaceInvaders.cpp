/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:48 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 15:52:45 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/SpaceInvaders.hpp"

SpaceInvaders::SpaceInvaders(std::string type, int hp, const char *path) : _type(type), _hp(hp) {
	_velocity = VELOCITY;
	initSprite(path);
	return ;
}

SpaceInvaders::~SpaceInvaders(void) {
	SDL_FreeSurface(_sprite);
	return ;
}

std::string	SpaceInvaders::getType(void) const {
	return _type;
}

int			SpaceInvaders::getVelocity(void) const {
	return _velocity;
}

int			SpaceInvaders::getCoordX(void) const {
	return _rcSprite.x;
}

int			SpaceInvaders::getCoordY(void) const {
	return _rcSprite.y;
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
	std::cout << "=== cooX: " << _rcSprite.x << std::endl;
	std::cout << "=== cooY: " << _rcSprite.y << std::endl;
	std::cout << "=== hp: " << _hp << std::endl;
}

void		SpaceInvaders::setHP(int amount) {
	if ((_hp = amount) < 0)
		_hp = 0;
}

void		SpaceInvaders::setRcSprite(int x, int y) {
	_rcSprite.x = x;
	_rcSprite.y = y;
}

void		SpaceInvaders::initSprite(const char *path) {
	SDL_Surface	*temp;

	temp = SDL_LoadBMP(path);
	_sprite = SDL_DisplayFormat(temp);
	SDL_FreeSurface(temp);
}

int			SpaceInvaders::getWidth(void) {
	return _sprite->w;
}


int			SpaceInvaders::getHeight(void) {
	return _sprite->h;
}

void		SpaceInvaders::performSprite(SDL_Surface *screen) {
	SDL_BlitSurface(_sprite, NULL, screen, &_rcSprite);
}

void		SpaceInvaders::setVelocity(int velocity) {
	_velocity = velocity;
}