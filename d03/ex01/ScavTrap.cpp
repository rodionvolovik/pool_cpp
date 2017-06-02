/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:28:26 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/02 20:25:04 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int 	ScavTrap::_max_hp = 100;
int 	ScavTrap::_max_energy = 50;
int 	ScavTrap::_melee_damage = 20;
int 	ScavTrap::_ranged_damage = 15;

ScavTrap::ScavTrap(std::string name) {
	this->_hp = 100;
	this->_energy = 50;
	this->_level = 1;
	this->_armor = 3;
	this->_name = name;
	std::cout << "A ScavTrap unit "
				<< CNAME
				<< this->_name
				<< UNCOLOR << " is ready for battle" << std::endl;
	return ;
}
ScavTrap::~ScavTrap(void) {
	std::cout << "A ScavTrap unit "
				<< CNAME << this->_name
				<< UNCOLOR << " retired" << std::endl;
	return ;
}

void	ScavTrap::rangedAttack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "Could it rangedAttack? ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "ScavTrap unit " << CNAME << this->_name << UNCOLOR << " attacks "
					<< target << " at range, causing "
					<< ScavTrap::_ranged_damage << " points of damage !"
					<< std::endl;
	}
	return ;
}

void	ScavTrap::meleeAttack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "Could it rangedAttack? ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "ScavTrap unit " << CNAME << this->_name << UNCOLOR << " attacks "
					<< target << " at melee, causing "
					<< ScavTrap::_melee_damage << " points of damage !"
					<< std::endl;
	}
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->_hp == 0)
		this->_dead(this->_name);
	else
		this->_hp -= amount - this->_armor;

	if (this->_hp <= 0)
		this->_hp = 0;
	std::cout << this->_name << " is damaged on " << amount
				<< "hp, because of its " << this->_armor
				<< "hp armor, it has "
				<< this->_hp << "hp now" << std::endl;
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hp == 0)
		std::cout << "Ooooh!! I'm back, as I said! ";
	this->_hp += amount;

	if (this->_hp > ScavTrap::_max_hp) {
		this->_hp = ScavTrap::_max_hp;
	}
	std::cout << "Added some HP. " << this->_name
	<< " has " << this->_hp << "hp" << std::endl;
}
void	ScavTrap::challengeNewcomer(void) {
	return ;
}

void	ScavTrap::_dead(std::string name) {
	std::cout << name << " is already looking on you from heaven." << std::endl;
	return ;
}

void	ScavTrap::_noenergy(std::string name) {
	std::cout << name << " has no energy. Use <.addEnergy()> to restore some."
				<< std::endl;
	return ;
}
