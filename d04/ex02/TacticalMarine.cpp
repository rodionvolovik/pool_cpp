/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:18:20 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:29:32 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	cout << "Tactical Marine ready for battle" << endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &obj) {
	*this = obj;
	cout << "Tactical Marine ready for battle" << endl;
}

TacticalMarine::~TacticalMarine(void) {
	cout << "Aaargh..." << endl;
}

ISpaceMarine	*TacticalMarine::clone(void) const {
	return new TacticalMarine;
}

void			TacticalMarine::battleCry(void) const {
	cout << "For the holy PLOT !" << endl;
}

void			TacticalMarine::rangedAttack(void) const {
	cout << "* attacks with bolter *" << endl;
}

void			TacticalMarine::meleeAttack(void) const {
	cout << "* attacks with chainsword *" << endl;
}
