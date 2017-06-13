/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:48:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 20:03:13 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("ice") {
}

Cure::~Cure(const Cure &obj) : AMateria(obj.getType()) {
}

Cure::~Cure(void) {
}

AMateria	*Cure::clone(void) const {
	return new Cure("ice");
}

void		Cure::use(ICharachter &target) {
	AMateria::use(target);
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

Cure		&Cure::operator=(const Cure &obj) {
	this._xp = obj._xp;
	return *this;
}
