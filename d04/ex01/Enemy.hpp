/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:35:14 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:39:30 by rvolovik         ###   ########.fr       */
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
	~Enemy(void);
	string const		getType(void) const;
	int					getHP(void) const;
	virtual void		takeDamage(int) = 0;
};

ostream					&operator<<(ostream &os, const Enemy &obj);

#endif
