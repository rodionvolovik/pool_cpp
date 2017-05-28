/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:29:57 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/28 19:58:28 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

//CONST PARAMETER
const int	Fixed::_fraction_bits = 8;

//CONSTRUCTORS AND DESTRUCTOR
Fixed::Fixed(void) : _raw_bits(0) {
	std::cout << "Default constructor called" << '\n';
	return ;
}

Fixed::Fixed(const Fixed &rhs) {
	std::cout << "Copy constructor called" << '\n';
	*this = rhs;
	return ;
}

Fixed::Fixed(const int value) : _raw_bits((long)value << this->_fraction_bits) {
	std::cout << "Int constructor called" << '\n';
	return ;
}

Fixed::Fixed(const float value) :_raw_bits(roundf(value * (1 << this->_fraction_bits))) {
	std::cout << "Float constructor called" << '\n';
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << '\n';
	return ;
}

//PUBLIC METHODS
int		Fixed::getRawBits(void) const {
	return this->_raw_bits;
}

void	Fixed::setRawBits(const int value) {
	this->_raw_bits = value;
}

float	Fixed::toFloat(void) const {
	return (float)(this->_raw_bits / (float)(1 << this->_fraction_bits));
}

int		Fixed::toInt(void) const {
	return (this->_raw_bits >> this->_fraction_bits);
}

//MEMBER OPERATOR OVERLOAD
Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << '\n';
	if (this != &rhs)
		this->_raw_bits = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &rhs) const {
	return (this->_raw_bits > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const {
	return (this->_raw_bits < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const {
	return (this->_raw_bits >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const {
	return (this->_raw_bits <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const {
	return (this->_raw_bits == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const {
	return (this->_raw_bits != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rhs) const {
	return (Fixed)(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const {
	return (Fixed)(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const {
	return (Fixed)(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const {
	return (Fixed)(this->toFloat() / rhs.toFloat());
}

Fixed	&Fixed::operator++() {
	++this->_raw_bits;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);

	this->_raw_bits++;
	return tmp;
}

Fixed	&Fixed::operator--() {
	--this->_raw_bits;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);

	this->_raw_bits--;
	return tmp;
}

//STATIC FUNCTIONS

Fixed	&Fixed::max(Fixed &v1, Fixed &v2) {
	return v1 > v2 ? v1 : v2;
}

const Fixed	&Fixed::max(const Fixed &v1, const Fixed &v2) {
	return v1 > v2 ? v1 : v2;
}

Fixed	&Fixed::min(Fixed &v1, Fixed &v2) {
	return v1 < v2 ? v1 : v2;
}

const Fixed	&Fixed::min(const Fixed &v1, const Fixed &v2) {
	return v1 < v2 ? v1 : v2;
}
//NON MEMBER
std::ostream&	operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
}
