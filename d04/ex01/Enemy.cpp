/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:35:35 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:58:41 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, string const &type) : _hp(hp), _type(type) {
	return ;
}

Enemy::Enemy(const Enemy &obj) : _hp(obj.getHP()), _type(obj.getType()) {
	return ;
}

Enemy::~Enemy(void) {
	return ;
}

string const	Enemy::getType(void) const {
	return _type;
}

int				Enemy::getHP(void) const {
	return _hp;
}

ostream	&operator<<(ostream &os, const Enemy &obj) {
	os << ">man\tEnemy unit of type " << obj.getType() << " with " << obj.getHP() << " HP" << endl;
	return os;
}
