/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:45:03 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 02:52:19 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

using namespace std;

class SuperMutant : public Enemy {
private:
	int					_hp;
	string				_type;
public:
	SuperMutant(void);
	SuperMutant(const SuperMutant &obj);
	~SuperMutant(void);
	void		takeDamage(int damage);
};

#endif
