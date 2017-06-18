/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 17:57:02 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/18 12:58:59 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpaceInvaders.hpp"
#include "Charachter.hpp"
#include "Weapon.hpp"

int		main(void) {
	SpaceInvaders	*enemy = new SpaceInvaders("enemy1", 100);

	enemy->getInfo();
	enemy->setCoordX(4.5);
	enemy->setCoordY(5.5);
	enemy->getDamage(45);
	enemy->getInfo();


	delete enemy;

	Charachter	*player = new Charachter();
	Weapon	*rifle = new Weapon("rifle", 40);
	Weapon	*gun = new Weapon("gun", 20);

	player->getInfo();
	player->setCoordX(4.5);
	player->setCoordY(5.5);
	player->getDamage(45);
	player->restoreArmor(150);
	player->armOn(*rifle);
	player->getInfo();
	std::cout << "Attack is " << player->attack() << '\n';
	player->armOn(*gun);
	player->getDamage(70);
	player->getInfo();
	std::cout << "Attack is " << player->attack() << '\n';
	delete player;
	delete gun;
	delete rifle;
	return 0;
}
