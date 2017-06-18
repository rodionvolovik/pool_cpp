NAME = ft_retro

CFLAGS = -Wall -Wextra -Werror

LIBS = -lncurses

INCLUDES = -I./objects/includes

SRC = objects/SpaceInvaders.cpp objects/Charachter.cpp objects/Weapon.cpp \
	  main.cpp

.phony: all re clean fclean

all:
	@ clang++ $(CFLAGS) $(INCLUDES) $(SRC) -o $(NAME)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
