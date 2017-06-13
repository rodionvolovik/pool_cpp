/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:38:11 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:46:32 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharachter.hpp"

using namespace std;

class AMateria {
private:
   string				_type;
   unsigned int			_xp;
public:
	AMateria(string const &type);
	AMateria(const AMateria &obj);
	virtual ~AMateria(void);

	string const		&getType(void) const; //Returns the materia type
	unsigned int		getXP(void) const; //Returns the Materia's XP

	virtual AMateria*	clone(void) const = 0;
	virtual void		use(ICharachter &target);
};

#endif
