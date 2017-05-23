/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:30:59 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 21:55:10 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void) {
	_logTo[0] = &Logger::logToConsole;
	_logTo[1] = &Logger::logToFile;
	std::cout << "To log: to console 1 | to file 2. Make your choise." << '\n';
	return ;
}

Logger::~Logger(void) {
	return ;
}

void	Logger::logToConsole(std::string const &string) {
	std::cout << this->makeLogEntry(string) << std::endl;
}

void	Logger::logToFile(std::string const &string) {
	std::ofstream ofs("your.log");

	ofs << this->makeLogEntry(string);
	std::cout << "Your message was logged to your.log file" << '\n';
	return ;
}

std::string	Logger::makeLogEntry(std::string const &string) {
	return string;
}

void	Logger::log(std::string const &dest, std::string const &message) {
	(this->*_logTo[dest[0] % 3])(message);
}
