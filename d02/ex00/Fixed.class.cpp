/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:09:23 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 16:58:12 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

/* DEFAULT CONSTRUCTOR */

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;

	this->_value = 0;

	return ;
}

/* DEFAULT DESTRUCTOR */

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;

	return ;
}

/* COPY CONSTRUCTOR */

Fixed::Fixed(const Fixed &other) : _value(other._value) {
	std::cout << "Copy constructor called" << std::endl;

	return ;
}

/* ASSIGNMENT OPERATOR */

Fixed	&Fixed::operator=(Fixed &rhs) {
	std::cout << "Assignation operator called" << '\n';

	return *this;
}
