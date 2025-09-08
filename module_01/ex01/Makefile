NAME := zombies
CC := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

SRC := Zombie.cpp ZombieHorde.cpp main.cpp
HEADERS := Zombie.hpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)  

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re