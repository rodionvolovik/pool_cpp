/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:46:21 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/28 16:55:25 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int		main(void) {
	Fixed		a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;


	std::cout << "a is " << a.toInt() << " as Integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as Integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as Integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as Integer" << std::endl;

	return 0;
}
