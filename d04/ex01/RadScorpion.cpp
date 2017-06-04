/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:45:05 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:56:40 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	cout << "* click click click *" << endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion &obj) : Enemy(obj.getHP(), obj.getType()) {
	cout << "* click click click *" << endl;
	return ;
}

RadScorpion::~RadScorpion(void) {
	cout << "* SPROTCH *" << endl;
}

void	RadScorpion::takeDamage(int damage) {
	if (_hp -= damage)
		_hp = 0;
}
