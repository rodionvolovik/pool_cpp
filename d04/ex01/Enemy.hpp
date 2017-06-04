/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:35:14 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 16:33:25 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

using namespace std;

class Enemy {
private:
	int					_hp;
	string				_type;
public:
	Enemy(int hp, string const & type);
	Enemy(const Enemy &obj);
	// ~Enemy(void);
	virtual ~Enemy(void) = 0;
	string const		getType(void) const;
	int					getHP(void) const;
	void				setHP(int hp);
	virtual void		takeDamage(int) = 0;
};

ostream					&operator<<(ostream &os, const Enemy &obj);

#endif
