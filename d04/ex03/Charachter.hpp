/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 22:13:36 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/04 23:03:46 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACHTER_HPP
# define CHARACHTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define CHSIZE	5

using namespace std;

class Character : public ICharacter {
private:
	AMateria	_equipment[CHSIZE];
public:
	Character(void);
	Character(const Character &obj);
	~Character(void);

	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharachter &target);

	Character	&operator=(const Character &obj);
};

#endif
