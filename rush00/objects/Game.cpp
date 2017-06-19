/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 13:31:13 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 18:18:21 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Game.hpp"

Game::Game(const char *name) : _gamename(name) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_WM_SetCaption(_gamename, _gamename);

    _screen = SDL_SetVideoMode(SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
    _player = new Charachter();
    _player->setRcSprite(SCREEN_WIDTH / 2 - _player->getWidth() / 2, SCREEN_HEIGHT);
    _gameover = 0;
    // _keystate = SDL_GetKeyState(NULL);
    return ;
}

Game::~Game(void) {
    return ;
}

void    Game::play(void) {
    while (!_gameover) {
        if (SDL_PollEvent(&_event)) {
            switch (_event.type) {
                case SDL_QUIT:
                    _gameover = 1;
                    break;
                case SDL_KEYDOWN:
                    switch (_event.key.keysym.sym) {
                        case SDLK_ESCAPE:
                            _gameover = 1;
                            break;
                        case SDLK_SPACE:
                            _player->attack(_screen);
                            break;
                        default:
                            break;
                    }
                    break;
            }
        }
        _keystate = SDL_GetKeyState(NULL);
        controlKey();
        updateScreen();
    }
    freeAndQuit();
}

void    Game::controlKey(void) {
    if (_keystate[SDLK_LEFT])
			_player->setRcSprite(_player->getCoordX() - _player->getVelocity(), _player->getCoordY());
		if (_keystate[SDLK_RIGHT] ) {
			_player->setRcSprite(_player->getCoordX() + _player->getVelocity(), _player->getCoordY());
		}
		if (_keystate[SDLK_UP] ) {
			_player->setRcSprite(_player->getCoordX(), _player->getCoordY() - _player->getVelocity());
		}
		if (_keystate[SDLK_DOWN] ) {
			_player->setRcSprite(_player->getCoordX(), _player->getCoordY() + _player->getVelocity());			
		}

		if ( _player->getCoordX() < 0 ) {
			_player->setRcSprite(0, _player->getCoordY());
		}
		else if ( _player->getCoordX() > SCREEN_WIDTH - _player->getWidth() ) {
			_player->setRcSprite(SCREEN_WIDTH - _player->getWidth(), _player->getCoordY());
		}
		if ( _player->getCoordY() < 0 ) {
			_player->setRcSprite(_player->getCoordX(), 0);
		}
		else if ( _player->getCoordY() > SCREEN_HEIGHT - _player->getHeight() ) {
			_player->setRcSprite(_player->getCoordX(), SCREEN_HEIGHT - _player->getHeight());
		}
}

void    Game::updateScreen(void) {
    _player->performSprite(_screen);
    _player->runBullets(_screen);
	SDL_UpdateRect(_screen, 0, 0, 0, 0);
}

void    Game::freeAndQuit(void) {
    delete _player;
    SDL_FreeSurface(_screen);
	SDL_Quit();
}