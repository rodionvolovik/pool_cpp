/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:48:54 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:45:55 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

using namespace std;

class Ice : public AMateria {
private:

public:
	Ice(void);
	Ice(const Ice &obj);
	~Ice(void);
	AMateria	*clone(void) const;
	void		use(ICharachter &target);
	Ice			&operator=(const Ice &obj);
};

#endif
