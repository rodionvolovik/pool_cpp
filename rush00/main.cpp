/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 17:57:02 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/18 18:08:00 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpaceInvaders.hpp"
#include "Charachter.hpp"
#include "Weapon.hpp"
#include "SDL.h"

#define SCREEN_WIDTH	1200
#define SCREEN_HEIGHT	800
#define SPRITE_SIZE		64

void	initScreen() {
//DISPLAY init()
	SDL_Surface *screen;
	SDL_Event	event;
	Uint8		*keystate;
	int		gameover;
	SDL_Init(SDL_INIT_VIDEO);
	SDL_WM_SetCaption("MyGame", "Game");
	screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
	Charachter	*player = new Charachter();
	player->setRcSprite(SCREEN_WIDTH / 2 - player->getWidth() / 2, SCREEN_HEIGHT);
	gameover = 0;

//DISPLAY play()
	while (!gameover) {
		if (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					gameover = 1;
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.sym) {
						case SDLK_ESCAPE:
						case SDLK_q:
							gameover = 1;
							break;
						default:
							break;
					}
					break;
			}
		}
//DISPLAY controlKey()
		keystate = SDL_GetKeyState(NULL);
		if (keystate[SDLK_LEFT])
			player->setRcSprite(player->getCoordX() - player->getVelocity(), player->getCoordY());
		if (keystate[SDLK_RIGHT] ) {
			player->setRcSprite(player->getCoordX() + player->getVelocity(), player->getCoordY());
		}
		if (keystate[SDLK_UP] ) {
			player->setRcSprite(player->getCoordX(), player->getCoordY() - player->getVelocity());
		}
		if (keystate[SDLK_DOWN] ) {
			player->setRcSprite(player->getCoordX(), player->getCoordY() + player->getVelocity());			
		}

		if ( player->getCoordX() < 0 ) {
			player->setRcSprite(0, player->getCoordY());
		}
		else if ( player->getCoordX() > SCREEN_WIDTH-SPRITE_SIZE ) {
			player->setRcSprite(SCREEN_WIDTH - player->getWidth(), player->getCoordY());
		}
		if ( player->getCoordY() < 0 ) {
			player->setRcSprite(player->getCoordX(), 0);
		}
		else if ( player->getCoordY() > SCREEN_HEIGHT-SPRITE_SIZE ) {
			player->setRcSprite(player->getCoordX(), SCREEN_HEIGHT - player->getHeight());
		}

//DISPLAY updateScreen()
		// SDL_BlitSurface(sprite, NULL, screen, &rcSprite);
		player->performSprite(screen);
		SDL_UpdateRect(screen, 0, 0, 0, 0);
	}

	// SDL_FreeSurface(sprite);
	SDL_FreeSurface(screen);
	SDL_Quit();
}

int		main(void) {

	initScreen();
	return 0;
}
