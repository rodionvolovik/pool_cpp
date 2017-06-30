/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vizu.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 03:41:19 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 04:16:57 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Vizu.hpp"

Vizu::Vizu(void) {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cout << "Ooops! An error occured: " << SDL_GetError() << std::endl;
    }

    _window = SDL_CreateWindow("SDL OOP Practicing", SDL_WINDOWPOS_CENTERED, 
                SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    return;
}

Vizu::~Vizu(void) {
    return;
}

//if it's not possible to load an image a NULL will be returned
SDL_Texture *Vizu::loadTexture(std::string filepath) {
    SDL_Surface *loadedImage = NULL;
    SDL_Texture *texture = NULL;

    loadedImage = SDL_LoadBMP(filepath.c_str());
    if (loadedImage != NULL) {
        texture = SDL_CreateTextureFromSurface(_renderer, loadedImage);
        SDL_FreeSurface(loadedImage);
    }
    else
        std::cout << "Ooops! An error occured: " << SDL_GetError() << std::endl;
    return texture;
}

void        Vizu::applySurface(int x, int y, SDL_Texture *texture, SDL_Renderer *renderer) {
    SDL_Rect    pos;

    pos.x = x;
    pos.y = y;

    SDL_QueryTexture(texture, NULL, NULL, &pos.w, &pos.h);
    SDL_RenderCopy(renderer, texture, NULL, &pos);
}

void        Vizu::loadBackground(std::string path) {
    _background = loadTexture(path);
}