/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:12:04 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/28 16:50:18 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed(void);
	Fixed(const Fixed &rhs);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed				&operator=(const Fixed &rhs);

	int 				getRawBits(void) const;
	void				setRawBits(const int value);
	float				toFloat(void) const;
	int					toInt(void) const;

private:
	int					_raw_bits;
	static const int	_fraction_bits;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs);

#endif//----------------------------------FIXED_CLASS_HPP
