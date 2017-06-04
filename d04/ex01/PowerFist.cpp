/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:29:37 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:33:08 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("PowerFist", 8, 50) {
	return ;
}

PowerFist::PowerFist(const PowerFist &obj) : AWeapon(obj.getName(), obj.getAP(), obj.getDamage()) {
	return ;
}

PowerFist::~PowerFist(void) {
	return ;
}

void	PowerFist::attack(void) const {
	cout << "* pschhh... SBAM! *" << endl;
}
