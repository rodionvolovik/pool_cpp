/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 18:21:05 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/18 12:56:00 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACHTER_CPP
# define CHARACHTER_CPP

# include "SpaceInvaders.hpp"
# include "Weapon.hpp"

class Charachter : public SpaceInvaders {
private:
	int			_armor;
	Weapon		*_weapon;
	static int	_maxarmor;
	static int	_maxhp;

public:
	Charachter(void);
	Charachter(const Charachter &rhs);
	~Charachter(void);
	int			getArmor(void);
	void		getDamage(int amount);
	void		armOn(Weapon &rhs);
	void		restoreArmor(int amount);
	int			attack(void);
	void		restoreHP(int amount);
	void		getInfo(void);
};

#endif
