/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 19:16:00 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 20:45:53 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP
# define __ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string	_name;
	std::string	_type;

public:
	Zombie (void);
	Zombie(std::string name, std::string type);
	~Zombie (void);

	void	announce(void);
};

#endif
