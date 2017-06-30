/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 19:09:28 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 03:36:09 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
private:
	std::string	_type;
	int			_damage;


public:
	Weapon(std::string type, int damage);
	Weapon(const Weapon &rhs);
	~Weapon(void);
	std::string	getType(void) const;

};

#endif
