/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 01:15:21 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/31 01:29:56 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
#define FRAGTRAP_CLASS_HPP

#include <iostream>

class FragTrap {
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

public:
	FragTrap (std::string name);
	~FragTrap ();
};

#endif
