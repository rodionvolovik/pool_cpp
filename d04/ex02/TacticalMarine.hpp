/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:18:24 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 19:29:58 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

using namespace std;

class TacticalMarine : public ISpaceMarine {
private:

public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &obj);
	~TacticalMarine(void);
	ISpaceMarine	*clone(void) const;
	void			battleCry(void) const;
	void			rangedAttack(void) const;
	void			meleeAttack(void) const;
};

#endif
