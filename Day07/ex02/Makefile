# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/14 14:39:08 by tmekwa            #+#    #+#              #
#    Updated: 2018/06/14 14:39:10 by tmekwa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Array

FILES = main.cpp

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
		@clang++ $(FLAGS) $(FILES) -o $(NAME)
		@echo $(NAME) is compiled!!

fclean:
	@rm -rf $(NAME)
re:fclean all