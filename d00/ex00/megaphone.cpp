/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/06 17:41:22 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/06 17:54:10 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char *av[]) {
	int		i;

	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE NOIZE *" << std::endl;
	else {
		while (av[i]) {
			for (size_t j = 0; j < strlen(av[i]); j++)
				av[i][j] = toupper(av[i][j]);
			std::cout << av[i++];
		}
		std::cout << std::endl;
	}
	return (0);
}
