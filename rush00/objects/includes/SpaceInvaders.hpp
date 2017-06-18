/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:46 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/17 19:06:43 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEINVADERS_HPP
# define SPACEINVADERS_HPP

# include <iostream>

# define SIZEX	0
# define SIZEY	1

class SpaceInvaders {
private:
	std::string	_type;
	int			_velocity;
	float		_cooX;
	float		_cooY;
	int			_hp;

public:
	SpaceInvaders(std::string type, int hp);
	SpaceInvaders(const SpaceInvaders &rhs);
	~SpaceInvaders(void);

	std::string	getType(void) const;
	int			getVelocity(void) const;
	float		getCoordX(void) const;
	float		getCoordY(void) const;
	int			getHP(void) const;
	void		getDamage(int amount);
	void		setCoordX(float x);
	void		setCoordY(float y);
	void		setHP(int amount);

	void		getInfo(void);
};

#endif

//add operator overload and check copy constructor
