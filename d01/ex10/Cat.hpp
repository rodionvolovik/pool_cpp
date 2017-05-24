/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:18:43 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/24 14:32:54 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <fstream>

class Cat {
private:
	typedef void	(Cat::*SwitchInput)(const std::string&);

	void	catFile(std::string const &file);
	void	catConsole(std::string const &string);

	SwitchInput		_func[2];

public:
	Cat(void);
	~Cat(void);
	void	cat(std::string const &switcher, std::string const &file);
};

#endif
