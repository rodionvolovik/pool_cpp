/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 20:34:23 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/23 21:26:26 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void) {
	Human	man;

	man.action("1", "another human");
	man.action("2", "another human");
	man.action("3", "another human");
}
