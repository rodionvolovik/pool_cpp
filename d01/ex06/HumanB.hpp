/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 12:47:30 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 13:20:47 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB (std::string name);
	~HumanB (void);
	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif
