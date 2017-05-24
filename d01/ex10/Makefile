NAME = cat9tails

SRC = Cat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

INC = -I./

.phony: all clean fclean re

all: $(OBJ)
	clang++ -Wall -Wextra -Werror $(INC) $(OBJ) -o $(NAME)

%.o : ./%.cpp
	clang++ -Wall -Wextra -Werror -o $@ -c $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
