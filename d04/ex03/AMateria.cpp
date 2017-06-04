/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:41:54 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:47:57 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const string &type) : _type(type), _xp(0) {
}

AMateria::AMateria(const AMateria &obj) : _type(obj.getType()), _xp(obj.getXP()) {
}

AMateria::~AMateria(void) {
}

string const	&AMateria::getType(void) const {
	return _type;
}

unsigned int	AMateria::getXP(void) const {
	return _xp;
}

void			AMateria::use(ICharacter &target) {
	_xp += 10;
}
