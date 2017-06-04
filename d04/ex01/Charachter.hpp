/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:19:45 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 03:54:13 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACHTER_HPP
# define CHARACHTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
private:
	string			_name;
	int				_ap;
	AWeapon			*_weapon;
public:
	Character(string const &name);
	Character(const Character &obj);
	~Character(void);
	void			recoverAP(void);
	void			equip(AWeapon *weapon);
	void			attack(Enemy *enemy);
	string const	getName(void) const;
	int				getAP(void) const;
	string			getWeapon(void) const;
};

ostream	&operator<<(ostream &os, const Character &obj);

#endif
