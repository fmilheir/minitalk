CC=cc
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC=ft_mem*.c ft_str*.c ft_to*.c ft_is*.c ft_atoi.c ft_bzero.c ft_calloc.c \
ft_substr.c ft_split.c ft_itoa.c ft_put*.c
OBJ=*.o
BONUS=ft_lst*.c
all: $(NAME)
$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all	
bonus: $(BONUS)
	$(CC) $(CFLAGS) $(OPTIONS) $(BONUS)
	ar -crs $(NAME) $(OBJ)
.PHONY: clean fclean all re bonus

