/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 16:39:46 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/19 16:45:21 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string	string = "HI THIS IS BRAIN";

	std::string	*ptrString = &string;
	std::string	&refString = string;

	std::cout << "ptrString: " << ptrString << std::endl;
	std::cout << "refString: " << refString << std::endl;
	return 0;
}
