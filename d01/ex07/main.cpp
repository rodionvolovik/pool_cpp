/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:45:58 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 14:37:31 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Filemanip.hpp"

int		main(int ac, char *av[]) {
	if (ac == 4) {
		Filemanip	file(av[1], av[2], av[3]);
		std::string	filecontents;

		// file.getInfo();
		filecontents = file.readFile();
		// std::cout << filecontents << '\n';
		file.writeTransformedLine(filecontents);
	}
	else
		std::cout << "Not enough parameters" << '\n';
	return 0;
}
