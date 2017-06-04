/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:02:51 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:26:22 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("PlasmaRifle", 5, 21) {
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &obj) : AWeapon(obj.getName(), obj.getAP(), obj.getDamage()) {
	return ;
}

PlasmaRifle::~PlasmaRifle(void) {
	return ;
}

void	PlasmaRifle::attack(void) const {
	cout << "* piouuu piouuu piouuu *" << endl;
}
