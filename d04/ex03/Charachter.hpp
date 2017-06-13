/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Charachter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 22:13:36 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:16:02 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACHTER_HPP
# define CHARACHTER_HPP

# include <iostream>
# include <string>
# include "ICharachter.hpp"
# include "AMateria.hpp"

# define CHSIZE	5

using namespace std;

class Charachter : public ICharachter {
private:
	string			_name;
	AMateria		_equipment[CHSIZE];
public:
	Charachter(string name);
	Charachter(const Charachter &obj);
	~Charachter(void);

	string const	&getName() const;
	void			equip(AMateria *m);
	void			unequip(int idx);
	void			use(int idx, ICharachter &target);

	Charachter		&operator=(const Charachter &obj);
};

#endif
