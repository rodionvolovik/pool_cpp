/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 01:24:42 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/01 00:04:46 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int		main(void) {
	FragTrap	tank("FRG4-TP");

	tank.rangedAttack("wall");
	tank.takeDamage(75);
	tank.meleeAttack("somebody");
	tank.takeDamage(15);
	tank.rangedAttack("house");
	tank.meleeAttack("somebody");
	tank.takeDamage(15);
	tank.rangedAttack("wall");
	tank.beRepaired(10);
	tank.takeDamage(75);
	tank.rangedAttack("wall");
	tank.beRepaired(20);
	tank.rangedAttack("wall");
	tank.addEnergy(100);
	return 0;
}
