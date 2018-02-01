# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moana <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 20:18:45 by moana             #+#    #+#              #
#    Updated: 2017/08/27 20:27:18 by moana            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) *.c
	gcc -o $(NAME) $(FLAG) *.o
clean:
	/bin/rm -f *.o
fclean:clean
	/bin/rm -f $(NAME)
re: fclean all
