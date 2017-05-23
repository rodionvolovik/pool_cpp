/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:31:10 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 21:55:46 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>

class Logger {
	typedef void	(Logger::*LogSwitch)(const std::string&);

private:
	std::string		_filename;
	void			logToConsole(std::string const &string);
	void			logToFile(std::string const &string);
	std::string		makeLogEntry(std::string const &string);
	LogSwitch		_logTo[2];

public:
	Logger (void);
	~Logger(void);
	void			log(std::string const &dest, std::string const &message);
};

#endif
