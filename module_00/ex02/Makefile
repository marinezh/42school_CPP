NAME := account
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := Account.cpp tests.cpp
OBJ := $(SRC:.cpp=.o)
HEADERS := Account.hpp

GREEN := \033[0;32m
YELLOW := \033[0;33m
RED := \033[0;31m
RESET := \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo -e "$(YELLOW)[Linking]$(RESET) $@"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@echo -e "$(GREEN)[OK] Built $(NAME)$(RESET)"

%.o: %.cpp $(HEADERS)
	@echo -e "$(YELLOW)[Compiling]$(RESET) $<"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo -e "$(RED)[Cleaned] object files$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo -e "$(RED)[Removed] $(NAME) executable$(RESET)"

re: fclean all

.PHONY: all clean fclean re
