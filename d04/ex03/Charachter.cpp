/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 20:08:10 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:45:31 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Charachter.hpp"

Charachter::Charachter(string name) : _name(name) {
	for (int i < 0; i < CHSIZE; i++) {
		_equipment[i] = NULL;
	}
}

Charachter::Charachter(const Charachter &obj) {
	if (this != &obj) {
		_name = obj._name();
		for (size_t i = 0; i < CHSIZE; i++) {
			if (_equipment[i])
				_equipment[i] = NULL;
			_equipment[i] = obj._equipment[i];
		}
	}
}

Charachter::~Charachter(void) {
	for (size_t i = 0; i < CHSIZE; i++) {
		if (_equipment[i])
			_equipment[i] = NULL;
	}
}

string const	&Charachter::getName() const {
	return _name;
}

void	Charachter::equip(AMateria *m) {
	int		i = 0;
	while (_equipment[i])
		++i;
	if (i != CHSIZE - 1)
		_equipment[i] = m;
}

void	Charachter::unequip(int idx) {
	_equipment[i] = NULL;
}

void	use(int idx, ICharachter &target) {
	_equipment[idx].use(idx, target);
}

Charachter	&operator=(const Charachter &obj) {
	return Charachter::Charachter(obj);
}
