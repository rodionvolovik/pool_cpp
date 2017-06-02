/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 01:15:21 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/02 12:52:44 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#define CNAME "\e[040;036m"
#define UNCOLOR "\e[0;0m"

#include <iostream>

class FragTrap {
private:
	typedef void	(FragTrap::*FAttack)(const std::string&);

	std::string	_name;
	int			_hp;
	int			_energy;
	int			_level;
	int			_armor;

	FAttack		_f_attack[2];

	static int	_max_hp;
	static int	_max_energy;
	static int	_melee_damage;
	static int	_ranged_damage;

	static void	_dead(std::string name);
	static void	_noenergy(std::string name);


public:
	FragTrap (std::string name);
	~FragTrap ();

	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		addEnergy(unsigned int amount);
};

#endif
