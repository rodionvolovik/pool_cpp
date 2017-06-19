/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 15:35:20 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 18:19:34 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bullet.hpp"

Bullet::Bullet(int hp, int x, int y) : SpaceInvaders(BULLET, hp, "img/bullet.bmp") {
    _alive = false;
    setRcSprite(x, y);
    setVelocity(3);
    return ;
}

Bullet::~Bullet(void) {
    return ;
}

void    Bullet::destroyBullet(void) {
    this->~Bullet();
}

void    Bullet::update(void) {
    if (_alive) {
        setRcSprite(getCoordX(), getCoordY() - getVelocity());
    }
}

void    Bullet::fire(void) {
    _alive = true;
}

void    Bullet::draw(SDL_Surface *screen) {
    performSprite(screen);
}