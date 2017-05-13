/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 20:14:06 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/13 15:28:38 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

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

Zombie	*ZombieEvent::randomChump(void) {
	int		random_val;
	std::string	random[] = {"Reeker", "Spasm Zombie", "Bleeder", "Bloomer", "Sliver"};
	
	std::srand(unsigned(time(0)));
	random_val = (int)(4 * (std::rand() / (RAND_MAX + 1.0)));
	return (new Zombie(random[random_val], this->_zombieType));
}
