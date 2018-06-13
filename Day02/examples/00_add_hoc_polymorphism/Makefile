NAME = sample

FILES = sample_class.cpp main.cpp

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@clang++ $(FLAGS) -o $(NAME) $(FILES)
	@echo sample compiled

fclean:
	@rm -f $(NAME)
	@echo $(NAME) cleaned
re: fclean all
	@echo sample compiled
	
