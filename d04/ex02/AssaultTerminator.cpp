/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:18:20 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:33:42 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	cout << "* teleports from space *" << endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &obj) {
	*this = obj;
	cout << "* teleports from space *" << endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	cout << "I’ll be back ..." << endl;
}

ISpaceMarine	*AssaultTerminator::clone(void) const {
	return new AssaultTerminator;
}

void			AssaultTerminator::battleCry(void) const {
	cout << "This code is unclean. PURIFY IT !" << endl;
}

void			AssaultTerminator::rangedAttack(void) const {
	cout << "* does nothing *" << endl;
}

void			AssaultTerminator::meleeAttack(void) const {
	cout << "* attacks with chainfists *" << endl;
}
