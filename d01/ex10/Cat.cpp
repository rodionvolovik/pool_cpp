/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:18:22 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 14:45:01 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	_func[0] = &Cat::catConsole;
	_func[1] = &Cat::catFile;

	return ;
}

Cat::~Cat(void) {
	return ;
}

void	Cat::catFile(std::string const &file) {
	std::ifstream	ifs(file);
	std::string		buf;

	if (ifs.is_open()) {
		while (getline(ifs, buf)) {
			std::cout << buf << std::endl;
		}
	}
	else
		std::cout << "File [" << file << "] doesn't exist or can't be opened" << '\n';
	return ;
}

void	Cat::catConsole(std::string const &string) {
	std::string	tmp;

	if (string == "") {
		while (!(getline(std::cin, tmp)).eof()) {
			std::cout << tmp << std::endl;
		}
	}
}

void	Cat::cat(std::string const &switcher, std::string const &file) {
	(this->*_func[switcher[0] % 3])(file);
	return ;
}
