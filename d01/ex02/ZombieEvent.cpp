/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 20:14:06 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 20:45:23 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	std::cout << "ZombieEvent constructed" << '\n';
	return ;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "ZombieEvent destructed" << '\n';
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie *zomb = new Zombie(name, this->_zombieType);
	return zomb;
}
