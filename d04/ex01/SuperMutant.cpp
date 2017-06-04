/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:45:05 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 16:18:16 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	cout << "Gaaah. Me want smash heads!" << endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant &obj) : Enemy(obj.getHP(), obj.getType()) {
	cout << "Gaaah. Me want smash heads!" << endl;
	return ;
}

SuperMutant::~SuperMutant(void) {
	cout << "Aaargh ..." << endl;
}

void	SuperMutant::takeDamage(int damage) {
	if (getHP() - damage + ARMOR < 0)
		setHP(0);
	else
		setHP(getHP() - damage + ARMOR);
}
