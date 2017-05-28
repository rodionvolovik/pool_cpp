/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:09:26 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/28 15:50:52 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
private:
	int					_raw_bits;
	static const int	_fraction_bits;

public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed	&operator=(const Fixed &rhs);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif
