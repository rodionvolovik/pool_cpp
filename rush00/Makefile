NAME = ft_retro

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I./objects/includes

# SRC = objects/SpaceInvaders.cpp objects/Charachter.cpp objects/Weapon.cpp \
# 	  main.cpp

SRC = objects/Vizu.cpp main.cpp

LIBS = -lpthread -ldl

SDL_LIB = -lSDL2 -Wl,-rpath=-I/usr/local/include

SDL_INCLUDE = -I/usr/local/include

.phony: all re clean fclean

all:
	@ clang++ $(CFLAGS) $(INCLUDES) $(SRC) $(SDL_LIB) $(SDL_INCLUDE) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
