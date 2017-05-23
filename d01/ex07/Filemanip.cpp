/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filemanip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:38:27 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 14:37:30 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Filemanip.hpp"

Filemanip::Filemanip(std::string name, std::string src, std::string dest) : _name(name), _src(src), _dest(dest) {
	return ;
}

Filemanip::~Filemanip() {
	return ;
}

void	Filemanip::getInfo(void) {
	std::cout << "File " << this->_name << std::endl;
}

std::string	Filemanip::readFile(void) {
	std::ifstream		ifs(this->_name.c_str());
	std::string			line;
	std::stringstream	ss;

	if (!ifs.is_open())
		std::cout << "File doesn't open or doesn't exists" << '\n';
	else {
		while (getline(ifs, line))
			ss << line << std::endl;
	}
	ifs.close();
	line = ss.str();
	return (line);
}

void	Filemanip::writeTransformedLine(std::string string) {
	size_t 				pos = 0;
	std::stringstream	ss;

	ss << this->_name << ".replace";
	std::ofstream	ofs(ss.str().c_str());

    while((pos = string.find(this->_src, pos)) != std::string::npos) {
         string.replace(pos, this->_src.length(), this->_dest);
         pos += this->_dest.length();
    }
	ofs << string;
	ofs.close();
}
