/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharachter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 19:58:53 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:51:18 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACHTER_HPP
# define ICHARACHTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class ICharachter {
public:
	virtual ~ICharachter() {}
	virtual std::string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharachter &target) = 0;
};

#endif
