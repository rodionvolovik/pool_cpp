/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 16:16:33 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 16:56:29 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

#include <iostream>

int		main(void) {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = a;

	return 0;
}
