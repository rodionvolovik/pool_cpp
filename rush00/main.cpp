/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 17:57:02 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 15:33:36 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpaceInvaders.hpp"
#include "Charachter.hpp"
#include "Weapon.hpp"
#include "SDL.h"
#include "Game.hpp"
#include "SDL_image.h"

int		main(void) {
	Game	*game = new Game("MyGame");
	game->play();
	delete game;
	return 0;
}
