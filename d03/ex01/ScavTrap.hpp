/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 12:28:28 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/02 20:06:36 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.class.hpp"

class ScavTrap {
private:

	std::string	_name;
	int			_hp;
	int			_energy;
	int			_level;
	int			_armor;

	static int	_max_hp;
	static int	_max_energy;
	static int	_melee_damage;
	static int	_ranged_damage;

	static void	_dead(std::string name);
	static void	_noenergy(std::string name);

public:
	ScavTrap (std::string name);
	~ScavTrap ();

	void		rangedAttack(const std::string &target);
	void		meleeAttack(const std::string &target);
	void		beRepaired(unsigned int amount);
	void		takeDamage(unsigned int amount);
	void		addEnergy(unsigned int amount);
	void		challengeNewcomer(void);
};

#endif
