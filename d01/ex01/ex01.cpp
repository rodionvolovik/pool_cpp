/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 17:27:42 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 17:59:07 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak() {
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
