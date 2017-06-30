/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:46 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 03:43:13 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEINVADERS_HPP
# define SPACEINVADERS_HPP

# include <iostream>

#include "SDL2/SDL.h"

# define VELOCITY	2.0;

class SpaceInvaders {
private:
	std::string	_type;
	int			_velocity;
	int			_hp;

public:
	SpaceInvaders(std::string type, int hp);
	~SpaceInvaders(void);

	std::string	getType(void) const;
	int			getVelocity(void) const;
	int			getHP(void) const;
	void		getDamage(int amount);
	void		setHP(int amount);
	void		setVelocity(int velocity);

	void		getInfo(void);
};

#endif

//add operator overload and check copy constructor
