/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 17:57:02 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 04:23:09 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpaceInvaders.hpp"
#include "Charachter.hpp"
#include "Weapon.hpp"
#include "SDL2/SDL.h"
#include "Vizu.hpp"

int		main(void) {
	Vizu	*test = new Vizu();

	test->loadBackground("img/background.bmp");
	test->image = test->loadTexture("img/image.bmp");
	SDL_Delay(2000);
	return 0;
}
