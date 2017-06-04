/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:02:37 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:38:38 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

using namespace std;

class AWeapon {
private:
	string			_name;
	int				_ap;
	int				_damage;
public:
	AWeapon(string const &name, int apcost, int damage);
	AWeapon(const AWeapon &obj);
	~AWeapon(void);
	string const	getName(void) const;
	int				getAP(void) const;
	int				getDamage(void) const;
	virtual void	attack(void) const = 0;
};

ostream				&operator<<(ostream &os, const AWeapon &obj);

#endif
