/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 19:40:11 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/10 13:48:28 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_CLASS_HPP
# define __CONTACT_CLASS_HPP

# include <iostream>

class Contact {
	public:
					Contact(void);
					~Contact(void);
		void		addContact(void);
		void		printContact(void);
		void		printShrtContact(void);
		static int	getNbContact(void);


	private:
		static int	_nbcontact;
		int			_id;
		std::string	_fname;
		std::string	_lname;
		std::string	_nick;
		std::string	_login;
		std::string	_post;
		std::string	_email;
		std::string	_phone;
		std::string	_bdate;
		std::string	_favmeal;
		std::string	_uwcolor;
		std::string	_secret;
		void		_maxstrlen(std::string str);
};

#endif
