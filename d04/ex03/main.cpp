/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 21:42:39 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:45:31 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharachter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Charachter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharachter* zaz = new Charachter("zaz");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharachter* bob = new Charachter("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	delete bob;
	delete zaz;
	delete src;
	return 0;
}
