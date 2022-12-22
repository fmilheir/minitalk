
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Headers */

# include "../libft/libft.h"
# include "../printf/ft_printf.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* Typedefs */

//to make a list in order to check the info passed;
typedef	struct s_list_int
{
	int				a[10000];
	int				count_element;
}					t_list_int;

typedef struct s_steps
{
	int				count_a;
	int				count_b;
	int				dest_a;
	int				dest_b;
}					t_steps;
//bolean created by me :)
typedef enum s_bool
{
	false,
	true
}	t_bool;
//linked list node
typedef struct s_test
{
	int				number;
	int				step;
	int				rotate;
	struct s_test	*previusInline;
	struct s_test	*nextInline;
}				t_test;
//global struct to carry all info
typedef struct s_stacks
{
	int				count_a;
	int				count_b;
	int				min;
	int				max;
	int				med;
	t_test			*a;
	t_test			*b;
}					t_stacks;
//auxiliary functions
t_bool	check_for_duplicates(t_test *start);
int		find_len(t_test *first);

//operations
//push
void	do_pa(t_stacks *stacks);
void	do_pb(t_stacks *stacks);
//rev_rotate
void	do_rra(t_test **first_a, t_bool print);
void	do_rrb(t_test **first_b, t_bool print);
void	do_rrr(t_stacks *stacks);
//rotate
void	do_ra(t_test **first, t_bool print);
void	do_rb(t_test **first_b, t_bool print);
void	do_rr(t_stacks *stacks);
//swap
void	do_sa(t_test *first_a, t_bool print);
void	do_sb(t_test *first_a, t_bool print);
void	do_ss(t_test *first_a, t_test *first_b);
//solver
void	solver(t_stacks *stacks);
void	ft_error(void);
int		*ft_int_cpy(int count, int *src, int *dst);
//minha_linked_list
void	print_f(const t_test *temp);
void	print_stuff(const t_test *temp);
t_test	*build_liked_list(int *list, int len);
/* aux Functions */
void	init_stacks(t_stacks *stacks, t_list_int *new);
void	ft_duplicate_check(t_list_int *new, t_stacks *stacks);
void	ft_free_stack(t_stacks *stacks);
void	init_stacks(t_stacks *stacks, t_list_int *new);
int		find_len(t_test *first);
t_bool	check_for_duplicates(t_test *start);
// clean_input//
int		ft_validation(int argc, char **argv);
void	ft_number_availability(const char *str);
void	ft_valid_str(const char *str);
int		ft_only_spaces(const char *str);
t_bool	ft_ordered_input(t_stacks *stacks, t_list_int *list);
// make list//
void	ft_array_separation(int argc, char **argv, t_list_int *new);
void	ft_stacking(t_list_int *new, int *buff, int count);
//quick sort
int		ft_is_sorted(t_list_int *new);
int		ft_partition(int *array, int start, int end);
void	ft_quick_sort(int *array, int start, int end);
//sortfor5
void	ft_sort_3_element(t_stacks *stacks);
void	ft_sort_5_element(t_stacks *stacks);
void	solverfor5(t_stacks *stacks);
int		ft_max(t_test *s);
//sort_big
void	ft_global_sort(t_stacks *stacks);
void	ft_start_sort(t_stacks *stacks);
void	ft_steps_markup(t_test*b, int count);
void	ft_minimum_insertion_steps(t_stacks *stacks, t_steps *steps);
void	ft_instruction_execution(t_stacks *stacks, t_steps *steps);
//find_space
void	ft_help_finding_place(t_stacks *s, t_test *b, int *action, int *buff);
int		ft_finding_place(t_stacks *s, t_test *b, t_steps *steps, int min);
int		ft_smaller_element_detection(t_test *a, int buff, int src);
int		ft_count_to_min(t_test *a, int min);
///tessteinff
int		ft_countword(char const *s);
#endif