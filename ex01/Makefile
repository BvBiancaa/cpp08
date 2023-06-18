# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:50:58 by bmuni             #+#    #+#              #
#    Updated: 2023/04/15 14:23:36 by bmuni            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=span

all: $(NAME)

$(NAME):
	c++ -g -Wall -Wextra -Werror main.cpp span.cpp -std=c++98 -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean $(NAME)

.PHONY: all, clean, fclean, re