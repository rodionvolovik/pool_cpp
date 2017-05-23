/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 20:34:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 21:29:04 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	_func[0] = &Human::meleeAttack;
	_func[1] = &Human::rangedAttack;
	_func[2] = &Human::intimidatingShout;
	return ;
}

Human::~Human(void) {
	return ;
}

void	Human::meleeAttack(std::string const &target) {
	std::cout << "Action called is a meleeAttack() on " << target << std::endl;
	return ;
}

void	Human::rangedAttack(std::string const &target) {
	std::cout << "Action called is a rangedAttack() on " << target << std::endl;
	return ;
}

void	Human::intimidatingShout(std::string const &target) {
	std::cout << "Action called is a intimidatingShout() on " << target << std::endl;
	return ;
}

void	Human::action(std::string const &action_name, std::string const &target) {
	(this->*_func[action_name[0] % 3 > 0 ? action_name[0] % 3 - 1 : 2])(target);
	return ;
}
