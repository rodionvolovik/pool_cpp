/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 20:20:14 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 20:57:29 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <cmath>

int		main(void) {

	Zombie	*zomb = new Zombie();
	zomb->announce();

	delete zomb;

	ZombieEvent zombEvent = ZombieEvent();
	zombEvent.setZombieType("angry");

	zomb = zombEvent.newZombie("Zomb");

	zomb->announce();

	return 0;
}
