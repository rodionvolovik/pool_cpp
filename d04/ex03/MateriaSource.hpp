/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 21:41:26 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:41:53 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria*	_inventory[4];
	int			_n_index;
public:
	MateriaSource();
	MateriaSource(const MateriaSource& src);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource& rhs);

	void		learnMateria(AMateria* m);
	AMateria*	createMateria(const std::string& type);
};

#endif
