#include "SDL.h"
#include "stdio.h"

const int	SCREEN_HEIGHT = 640;
const int	SCREEN_WIDTH = 480;

int		main(void) {
	SDL_Window	*window = NULL;
	SDL_Surface	*surface = NULL;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		printf("SDL couldn't init: SDL Error %s\n", SDL_GetError());
	}
	return 0;
}