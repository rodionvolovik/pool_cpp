/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 12:47:30 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 13:06:50 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA (std::string name, Weapon &weapon);
	~HumanA (void);
	void	attack(void);
};

#endif
