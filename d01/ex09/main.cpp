/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:30:47 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 13:38:34 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

#include <iostream>

int		main(void) {
	Logger		newLog;
	std::string	dest;
	std::string	createLog;

	std::cin >> dest;
	std::cout << "Your message to log:" << std::endl;
	std::cin >> createLog;
	newLog.log(dest.c_str(), createLog.c_str());
	return 0;
}
