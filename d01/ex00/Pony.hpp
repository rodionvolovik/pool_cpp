/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 16:48:47 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 17:26:24 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PONY_HPP
# define __PONY_HPP

# include <iostream>

class Pony {
private:
	std::string	_name;

public:
	Pony(std::string name);
	~Pony();

	std::string	getName(void);
};

#endif
