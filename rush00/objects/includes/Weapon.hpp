/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 19:09:28 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 16:25:49 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include "Bullet.hpp"

class Weapon {
private:
	std::string	_type;
	int			_damage;
	Bullet		*_bullet;


public:
	Weapon(std::string type, int damage);
	Weapon(const Weapon &rhs);
	~Weapon(void);
	std::string	getType(void) const;
	int			shoot(int x, int y, SDL_Surface *screen);
	void		update(SDL_Surface *screen);

};

#endif
