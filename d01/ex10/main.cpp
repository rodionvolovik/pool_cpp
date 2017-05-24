/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 13:50:58 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 14:36:40 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

int		main(int ac, char*av[]) {
	Cat	cat9tails;

	if (ac == 1)
		cat9tails.cat("0", "");
	else
	{
		for (int i = 1; i < ac; i++)
			cat9tails.cat("1", av[i]);
	}
	return 0;
}
