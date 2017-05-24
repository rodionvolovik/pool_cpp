/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:09:26 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 16:57:15 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
private:
	int	_value;

public:
	Fixed(void);
	Fixed(const Fixed &other);
	~Fixed(void);

	Fixed &operator=(Fixed &rhs);
};

#endif
