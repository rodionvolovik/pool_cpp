#ifndef DISPLAY_HPP
# define DISPLAY_HPP

# define SCREEN_WIDTH   1200
# define SCREEN_HEIGHT  700

#include "SDL.h"

class Display {
private:
    Charachter  *player;
public:
    Display(void);
    ~Display(void);
    void    play(void);
    void    setPlayer(Charachter &rhs);
};

#endif