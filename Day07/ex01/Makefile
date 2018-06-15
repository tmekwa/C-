# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmekwa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/13 15:11:22 by tmekwa            #+#    #+#              #
#    Updated: 2018/06/13 15:14:40 by tmekwa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

FILES = iter.cpp 

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		@clang++ $(FLAGS) $(FILES) -o $(NAME)
		@echo $(NAME) is compiled

fclean:
	@rm -f $(NAME)

re: fclean all


