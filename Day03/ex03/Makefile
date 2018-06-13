NAME = test

FILES = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp NinjaTrap.cpp

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) -o $(NAME) $(FILES)
fclean:
	@rm -f $(NAME)
re: fclean all
