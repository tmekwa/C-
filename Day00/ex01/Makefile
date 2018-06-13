NAME = contacts

FILES = main.cpp contacts.class.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) -o $(NAME) $(FILES)

fclean:
	@rm -f $(NAME)

re: fclean all