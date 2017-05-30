/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 01:18:49 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/31 01:32:56 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int 	FragTrap::_max_hp = 100;
int 	FragTrap::_max_energy = 100;
int 	FragTrap::_melee_damage = 30;
int 	FragTrap::_ranged_damage = 20;

FragTrap::FragTrap(std::string name) {
	this->_hp = 100;
	this->_energy = 100;
	this->_level = 1;
	this->_armor = 5;
	this->_name = name;
	std::cout << "A FragTrap unit " << this->_name << " is ready for battle" << '\n';
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "A FragTrap unit " << this->_name << " retired" << '\n';
	return ;
}
