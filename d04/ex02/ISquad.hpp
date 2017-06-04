/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 16:41:24 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:32:38 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

using namespace std;

class ISquad {
public:
	virtual					~ISquad(void) {};
	virtual int				getCount(void) const = 0;
	virtual ISpaceMarine	*getUnit(int) const = 0;
	virtual int				push(ISpaceMarine*) = 0;
};

#endif
