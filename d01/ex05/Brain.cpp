/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 16:49:15 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/19 17:16:37 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	return ;
}

Brain::~Brain(void) {
	return ;
}

std::string	Brain::identify(void) const {
	std::stringstream	str;
	str << this;
	return (str.str());
}
