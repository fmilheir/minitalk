NAME1	= push_swap

NAME2	= checker

CFLAGS 	= -Wall -Wextra -Werror

S_SRC_DIR =		src

S_SRC 	= push_swap.c auxiliary_functions.c minha_liked_list.c clean_input.c make_list.c quick_sort.c solve.c solverfor5.c rotate.c swap.c push.c rev_rotate.c sort_big.c find_space.c #validation.c actions.c actions_2.c actions_3.c \
			quick_sort.c separation.c initialization.c sort_3_and_5_element.c \
				global_sort.c finding_place.c

#SRC2 	= #checker.c validation.c actions.c actions_2.c actions_3.c \
			quick_sort.c separation.c initialization.c

OBJSFD 	= src

OBJS1 	= $(addprefix $(OBJSFD)/,$(S_SRC:.c=.o))

#OBJS2 	= $(addprefix $(OBJSFD)/,$(SRC2:.c=.o))


LIBFT_HDR 	= -I./libft

LIB_BINARY	= -L./libft -lft

LIBFT		= .libft/libft.h
# testing if whith this path the file are in the correct directory;
S_SRC_PATH =   	$(S_SRC:%=$(S_SRC_DIR)%)
S_OBJ_PATH =	$(addprefix $(OBJ_DIR), $(S_OBJ))

all: $(OBJS1) $(NAME1) #$(NAME2)

FORCE:		;

LIBFT		= libft/libft.a

$(LIBFT):	FORCE
			make -C ./libft

$(OBJSFD):
	mkdir $@

$(OBJSFD)/%.o: %.c | $(OBJSFD)
	gcc -g $(CFLAGS) $(HDR) $(LIBFT_HDR) -c $< -o $@

$(NAME1): $(OBJS1) $(LIBFT) ./include/push_swap.h
	gcc -g $(OBJS1) $(LIB_BINARY) -o $@

# $(NAME2): $(OBJS2) $(LIBFT) ./includes/push_swap.h
 

clean:
	
	make -C ./libft clean

fclean: clean
	/bin/rm -f $(NAME1)
	make -C ./includes/libft fclean

re: fclean all