/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 17:18:44 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/19 18:13:49 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
	Brain	_brain;

public:
	Human(void);
	~Human(void);
	Brain const	&getBrain(void) const;
	std::string	identify(void);
};

#endif
