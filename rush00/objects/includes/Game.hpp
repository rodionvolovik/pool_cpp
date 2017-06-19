
#ifndef GAME_HPP
# define GAME_HPP

# include "SDL.h"
# include "SDL_image.h"
# include "Charachter.hpp"

# define SCREEN_WIDTH   1200
# define SCREEN_HEIGHT  700


class Game {
private:
    Charachter  *_player;
    SDL_Event   _event;
    SDL_Surface *_screen;
    Uint8       *_keystate;
    int         _gameover;
    const char  *_gamename;

public:
    Game(const char *name);
    ~Game(void);
    void    play(void);
    void    controlKey(void);
    void    updateScreen(void);
    void    freeAndQuit(void);
};

#endif