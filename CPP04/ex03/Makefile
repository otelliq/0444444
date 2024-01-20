NAME = main

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		printf "\033[32mcompiling...\033[0m\n"
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
		printf "\033[32mDONE\033[0m\n"

clean:
	@rm -rf $(OBJ)
	printf "\033[31mcleaning...\033[0m\n"
fclean: clean
	@rm -rf $(NAME)

re: fclean all