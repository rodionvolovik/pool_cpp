/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:48:54 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 20:02:25 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

using namespace std;

class Cure : public AMateria {
private:

public:
	Cure(void);
	Cure(const Cure &obj);
	~Cure(void);
	AMateria	*clone(void) const;
	void		use(ICharacter &target);
	Cure		&Cure::operator=(const Cure &obj);
};

#endif
