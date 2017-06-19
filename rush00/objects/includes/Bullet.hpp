/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolovik <rvolovik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 15:35:19 by rvolovik          #+#    #+#             */
/*   Updated: 2017/06/19 16:02:18 by rvolovik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

# include "SDL.h"
# include "SDL_image.h"
# include "SpaceInvaders.hpp"

# define BULLET "bullet"

class Bullet : public SpaceInvaders {
private:
    bool    _alive;
public:
    Bullet(int hp, int x, int y);
    ~Bullet(void);
    void    destroyBullet(void);
    void    update(void);
    void    fire(void);
    void    draw(SDL_Surface *screen);
};

#endif