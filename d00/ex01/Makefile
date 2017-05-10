NAME = phonebook

SRC = Contact.class.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

.phony: all clean fclean re

all: $(OBJ)
	clang++ -Wall -Wextra -Werror $(OBJ) -o $(NAME)

%.o : ./%.cpp
	clang++ -Wall -Wextra -Werror -o $@ -c $< -I./

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
