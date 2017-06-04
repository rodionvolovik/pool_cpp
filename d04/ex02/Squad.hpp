/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 16:58:15 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 18:38:06 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ISquad.hpp"

using namespace std;

class Squad : public ISquad {
private:
	typedef struct			s_container {
		ISpaceMarine		*elem;
		struct s_container	*next;
	}						t_container;

	t_container				*_squad;
	int						_count;

	void	_destroyUnits(void);
	void	_copyUnits(const Squad &obj);
	bool	_alreadyIn(ISpaceMarine *marine, t_container *_squad);
public:
	Squad(void);
	Squad(const Squad &obj);
	~Squad(void);
	Squad					&operator=(const Squad &obj);
	int						getCount(void) const;
	ISpaceMarine			*getUnit(int n) const;
	int						push(ISpaceMarine *obj);
};

#endif
