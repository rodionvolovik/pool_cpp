/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/12 16:48:49 by rvolovik          #+#    #+#             */
/*   Updated: 2017/05/12 17:26:22 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void) {
	Pony	*pony = new Pony("Rodion");

	std::cout << "Pony " << pony->getName() << " ready to go" << std::endl;

	delete	pony;
	return ;
}

void	ponyOnTheStack(void) {
	Pony	pony = Pony("Hello");

	std::cout << "Pony " << pony.getName() << " ready to go" << std::endl;
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
}
