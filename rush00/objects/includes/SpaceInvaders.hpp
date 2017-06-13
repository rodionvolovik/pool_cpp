/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaceInvaders.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/13 21:46:46 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/13 22:13:06 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEINVADERS_HPP
# define SPACEINVADERS_HPP

# include <iostream>

# define SIZEX	0
# define SIZEY	1

class SpaceInvaders {
private:
	std::string	_name;
	int			_size[2];
	int			_velocity;
	int			_hp;
	int			_maxhp;

public:
	SpaceInvaders(std::string name);
	SpaceInvaders(const SpaceInvaders &rhs);
	~SpaceInvaders(void);

};

#endif
