/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:48:56 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 20:03:25 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
}

Ice::~Ice(const Ice &obj) : AMateria(obj.getType()) {
}

Ice::~Ice(void) {
}

AMateria	*Ice::clone(void) const {
	return new Ice("ice");
}

void		Ice::use(ICharachter &target) {
	AMateria::use(target);
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

Ice			&Ice::operator=(const Ice &obj) {
	this._xp = obj._xp;
	return *this;
}
