/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 20:34:55 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 21:23:24 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>

class Human {
	typedef void		(Human::*HumanFuncPointer)(const std::string&);

private:
	void				meleeAttack(std::string const &target);
	void				rangedAttack(std::string const &target);
	void				intimidatingShout(std::string const &target);
	HumanFuncPointer	_func[3];

public:
	Human(void);
	~Human(void);
	void				action(std::string const &action_name, std::string const &target);
};

#endif
