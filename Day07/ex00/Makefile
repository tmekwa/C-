# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 15:10:46 by tmekwa            #+#    #+#              #
#    Updated: 2018/06/13 15:10:48 by tmekwa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = whatever

FILES = whatever.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		clang++ $(FLAGS) $(FILES) -o $(NAME)
		@echo $(NAME)  is complied!!

fclean:
	@rm -f $(NAME)

re: fclean all
