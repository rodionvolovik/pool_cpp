/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 17:22:13 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/19 18:15:50 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

Brain const	&Human::getBrain(void) const {
	return (this->_brain);
}

std::string	Human::identify(void) {
	return (this->_brain.identify());
}
