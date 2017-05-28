/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:09:23 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/28 15:51:07 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int	Fixed::_fraction_bits = 8;

/* DEFAULT CONSTRUCTOR */

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;

	this->_raw_bits = 0;

	return ;
}

/* DEFAULT DESTRUCTOR */

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;

	return ;
}

/* COPY CONSTRUCTOR */

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;

	*this = other;

	return ;
}

/* ASSIGNMENT OPERATOR */

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << '\n';

	if (this != &rhs)
		this->_raw_bits = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << '\n';

	return this->_raw_bits;
}

void	Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << '\n';

	this->_raw_bits = raw;
}
