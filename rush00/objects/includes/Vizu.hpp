/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vizu.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 03:41:48 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/20 04:18:19 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIZU_HPP
# define VIZU_HPP

# include "SDL2/SDL.h"
# include "SDL2/SDL_video.h"
# include "SDL2/SDL_system.h"
# include "SDL2/SDL_render.h"
# include <iostream>

# define SCREEN_HEIGHT  700
# define SCREEN_WIDTH   1200

class Vizu {
private:
    SDL_Window      *_window;
    SDL_Renderer    *_renderer;
    SDL_Texture     *_background;
public:
    SDL_Texture     *image;
    
    Vizu(void);
    ~Vizu(void);
    SDL_Texture     *loadTexture(std::string filepath);
    void            applySurface(int x, int y, SDL_Texture *texture, SDL_Renderer *renderer);
    void            loadBackground(std::string path);
};

#endif