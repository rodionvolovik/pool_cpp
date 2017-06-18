NAME = ft_retro

CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I./objects/includes

SRC = objects/SpaceInvaders.cpp objects/Charachter.cpp objects/Weapon.cpp \
	  main.cpp

LIBS = -lpthread -ldl

SDL = -I./SDL__/include/SDL

LIBSDL = SDL__/lib64/libSDL.a SDL__/lib64/libSDLmain.a

.phony: all re clean fclean

all:
	@ clang++ $(CFLAGS) $(INCLUDES) $(SRC) $(SDL) $(LIBS) $(LIBSDL) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
