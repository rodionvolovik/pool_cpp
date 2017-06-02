/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 01:18:49 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/02 01:19:54 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

int 	FragTrap::_max_hp = 100;
int 	FragTrap::_max_energy = 100;
int 	FragTrap::_melee_damage = 30;
int 	FragTrap::_ranged_damage = 20;

FragTrap::FragTrap(std::string name) {
	_f_attack[0] = &FragTrap::rangedAttack;
	_f_attack[1] = &FragTrap::meleeAttack;
	_f_attack[2] = &FragTrap::laserInferno;
	_f_attack[3] = &FragTrap::clapInTheBox;
	_f_attack[4] = &FragTrap::minionTrap;

	this->_hp = 100;
	this->_energy = 100;
	this->_level = 1;
	this->_armor = 5;
	this->_name = name;
	std::cout << "A FragTrap unit "
				<< CNAME
				<< this->_name
				<< UNCOLOR << " is ready for battle" << std::endl;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "A FragTrap unit "
				<< CNAME << this->_name
				<< UNCOLOR << " retired" << std::endl;
	return ;
}

void	FragTrap::rangedAttack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "Could it rangedAttack? ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "FR4G-TP " << CNAME << this->_name << UNCOLOR << " attacks "
					<< target << " at range, causing "
					<< FragTrap::_ranged_damage << " points of damage !"
					<< std::endl;
	}
	return ;
}

void	FragTrap::meleeAttack(const std::string &target) {
	if (this->_hp == 0) {
		std::cout << "Could it rangedAttack? ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "FR4G-TP " << CNAME << this->_name << UNCOLOR << " attacks "
					<< target << " at melee, causing "
					<< FragTrap::_melee_damage << " points of damage !"
					<< std::endl;
	}
	return ;
}

void	FragTrap::takeDamage(unsigned int amount) {
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

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_hp == 0)
		std::cout << "Ooooh!! I'm back, as I said! ";
	this->_hp += amount;

	if (this->_hp > FragTrap::_max_hp) {
		this->_hp = FragTrap::_max_hp;
	}
	std::cout << "Added some HP. " << this->_name
	<< " has " << this->_hp << "hp" << std::endl;
}

void	FragTrap::addEnergy(unsigned int amount) {
	if (this->_energy == FragTrap::_max_energy)
		std::cout << this->_name << " has full energy" << std::endl;
	else {
		this->_energy += amount;

		if (this->_energy > FragTrap::_max_energy)
			this->_energy = FragTrap::_max_energy;

		std::cout << "Energy is restored on " << amount << " points. "
					<< "It is " << this->_energy << " for now" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target) {
	std::cout << this->_energy << '\n';
	if (this->_hp == 0)
		this->_dead(this->_name);
	else if (this->_energy - ENERGY < 0)
		this->_noenergy(this->_name);
	else {
		std::srand(unsigned(time(0)));
		this->_energy -= ENERGY;
		if (this->_energy < 0)
			this->_energy = 0;
		int		random = (int)(5 * (std::rand() / (RAND_MAX + 1.0)));
		(this->*_f_attack[random])(target);
	}
}

void	FragTrap::laserInferno(const std::string &target){
	std::srand(unsigned(time(0)));
	int		damage = (int)(100 * (std::rand() / (RAND_MAX + 1.0)));
	if (this->_hp == 0) {
		std::cout << "LaserInferno is unavailable:( ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "FR4G-TP " << CNAME << this->_name << UNCOLOR
					<< " makes laser inferno to "
					<< target << ", causing "
					<< damage << " points of damage !"
					<< std::endl;
	}
	return ;
}

void	FragTrap::clapInTheBox(const std::string &target){
	std::srand(unsigned(time(0)));
	int		damage = (int)(100 * (std::rand() / (RAND_MAX + 1.0)));
	if (this->_hp == 0) {
		std::cout << "clapInTheBox is unavailable:( ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "FR4G-TP " << CNAME << this->_name << UNCOLOR
					<< " claps InTheBox "
					<< target << ", causing "
					<< damage << " points of damage !"
					<< std::endl;
	}
	return ;
}

void	FragTrap::minionTrap(const std::string &target){
	std::srand(unsigned(time(0)));
	int		damage = (int)(100 * (std::rand() / (RAND_MAX + 1.0)));
	if (this->_hp == 0) {
		std::cout << "minionTrap is unavailable:( ";
		this->_dead(this->_name);
	}
	else if (this->_energy == 0) {
		this->_noenergy(this->_name);
	}
	else {
		std::cout << "FR4G-TP " << CNAME << this->_name << UNCOLOR
					<< " attacks "	<< target << "with minionTrap, causing "
					<< damage << " points of damage !"
					<< std::endl;
	}
	return ;
}


void	FragTrap::_dead(std::string name) {
	std::cout << name << " is already looking on you from heaven." << std::endl;
	return ;
}

void	FragTrap::_noenergy(std::string name) {
	std::cout << name << " has not enough energy. Use <.addEnergy()> to restore some."
				<< std::endl;
	return ;
}
