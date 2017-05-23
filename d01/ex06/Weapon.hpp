/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:36:14 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 12:57:56 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon();
	void	setType(std::string	type);
	std::string const	&getType(void) const;
};

#endif
