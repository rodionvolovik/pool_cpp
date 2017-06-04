/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:45:03 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 16:13:40 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

using namespace std;

class RadScorpion : public Enemy {
private:
	int					_hp;
	string				_type;
public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &obj);
	~RadScorpion(void);
	void		takeDamage(int damage);
};

#endif
