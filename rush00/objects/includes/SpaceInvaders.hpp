/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:46 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 01:51:55 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEINVADERS_HPP
# define SPACEINVADERS_HPP

# include <iostream>

#include "SDL.h"

# define VELOCITY	2.0;

class SpaceInvaders {
private:
	std::string	_type;
	int			_velocity;
	int			_hp;
	SDL_Rect	_rcSprite;
	SDL_Surface	*_sprite;

public:
	SpaceInvaders(std::string type, int hp, const char *path);
	~SpaceInvaders(void);

	std::string	getType(void) const;
	int			getVelocity(void) const;
	int			getCoordX(void) const;
	int			getCoordY(void) const;
	int			getHP(void) const;
	void		getDamage(int amount);
	void		setHP(int amount);
	void		setRcSprite(int x, int y);
	void		initSprite(const char *path);
	int			getWidth(void);
	int			getHeight(void);
	void		performSprite(SDL_Surface *screen);

	void		getInfo(void);
};

#endif

//add operator overload and check copy constructor
