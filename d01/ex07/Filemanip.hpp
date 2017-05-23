/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Filemanip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:38:25 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 14:30:55 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEMANIP_HPP
#define FILEMANIP_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Filemanip {
private:
	std::string	_name;
	std::string	_src;
	std::string	_dest;

public:
	Filemanip (std::string name, std::string src, std::string dest);
	~Filemanip ();
	std::string	readFile(void);
	void		getInfo(void);
	void		writeTransformedLine(std::string string);
};

#endif
