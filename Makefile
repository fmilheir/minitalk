# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmilheir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 17:45:20 by fmilheir          #+#    #+#              #
#    Updated: 2022/07/30 20:58:43 by fmilheir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:
	server client
	@cd libft && make all
	@gcc -Wall -Wextra -Werror server.c libft/libft.a -o server
	@gcc -Wall -Wextra -Werror client.c libft/libft.a -o client

clean:
	@cd libft && make clean
	@rm -f server
	@rm -f client

fclean: clean
	@cd libft && make fclean

re: fclean all

bonus: fclean
	@cd libft && make all
	@gcc -Wall -Wextra -Werror "bonus server_bonus.c" libft/libft.a -o server
	@gcc -Wall -Wextra -Werror "bonus client_bonus.c" libft/libft.a -o client
