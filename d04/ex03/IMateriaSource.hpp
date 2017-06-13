/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 21:19:36 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/07 21:24:26 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual	void	learnMateria(AMateria *) = 0;
	virtual AMateria*	createMateria(std::string const &type) = 0;
};

#endif
