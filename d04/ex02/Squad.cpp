/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 17:01:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:36:32 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

//-----------------------------------------PUBLIC STARTS
Squad::Squad(void) : _squad(NULL), _count(0) {
	return ;
}

Squad::Squad(const Squad &obj) {
	_copyUnits(obj);
	_count = obj.getCount();
}

Squad::~Squad(void) {
	_destroyUnits();
	return ;
}

Squad	&Squad::operator=(const Squad &obj) {
	if (this != &obj) {
		_destroyUnits();
		_copyUnits(obj);
		_count = obj.getCount();
	}
	return *this;
}

int		Squad::getCount() const {
	return _count;
}

ISpaceMarine	*Squad::getUnit(int n) const {
	t_container	*ptr = _squad;

	if (n < 0 || n >= _count)
		return NULL;
	else {
		while (n--)
			ptr = ptr->next;
		return ptr->elem;
	}
}

int		Squad::push(ISpaceMarine *obj) {
	t_container	*ptr;
	t_container	*add;

	if (!obj || _alreadyIn(obj, _squad))
		return _count;
	ptr = _squad;
	add = new t_container;
	add->elem = obj;
	add->next = NULL;
	if (!_squad) {
		_squad = add;
	} else {
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = add;
	}
	return ++_count;
}

ostream	&operator<<(ostream &os, const Squad &obj) {
	os << "This Squad has " << obj.getCount() << " units" << endl;
	return os;
}
//-----------------------------------------PUBLIC ENDS
//-----------------------------------------PRIVATE STARTS
void	Squad::_destroyUnits(void) {
	t_container	*ptr;
	_count = 0;
	if (!_squad)
		return ;
	else {
		delete _squad->elem;
		ptr = _squad;
		_squad = _squad->next;
		delete ptr;
		_destroyUnits();
	}
}

void	Squad::_copyUnits(const Squad &obj) {
	int		i = 0;

	while (i < obj.getCount()) {
		push(obj.getUnit(i));
		++i;
	}
}

bool	Squad::_alreadyIn(ISpaceMarine *marine, t_container *_squad) {
	if (!_squad)
		return false;
	else if (marine == _squad->elem)
		return true;
	else
		return _alreadyIn(marine, _squad->next);
}
//-----------------------------------------PRIVATE ENDS
