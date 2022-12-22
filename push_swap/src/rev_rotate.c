#include "../include/push_swap.h"

void	do_rra(t_test **first_a, t_bool print)
{
	t_test	*first_list;
	t_test	*rotate_list;
	t_test	*penultimate_list;

	if ((*first_a) == NULL || (*first_a)->nextInline == NULL)
		return ;
	first_list = *first_a;
	penultimate_list = *first_a;
	while (penultimate_list->nextInline->nextInline != NULL)
		penultimate_list = penultimate_list->nextInline;
	rotate_list = penultimate_list->nextInline;
	penultimate_list->nextInline = NULL;
	rotate_list->nextInline = first_list;
	*first_a = rotate_list;
	if (print == true)
		write(1, "rra\n", 4);
}

void	do_rrb(t_test **first_b, t_bool print)
{
	t_test	*first_list;
	t_test	*rotate_list;
	t_test	*penultimate_list;

	if ((*first_b) == NULL || (*first_b)->nextInline == NULL)
		return ;
	first_list = *first_b;
	penultimate_list = *first_b;
	while (penultimate_list->nextInline->nextInline != NULL)
		penultimate_list = penultimate_list->nextInline;
	rotate_list = penultimate_list->nextInline;
	penultimate_list->nextInline = NULL;
	rotate_list->nextInline = first_list;
	*first_b = rotate_list;
	if (print == true)
		write(1, "rrb\n", 4);
}

void	do_rrr(t_stacks *stacks)
{
	do_rra(&stacks->a, false);
	do_rrb(&stacks->b, false);
	write(1, "rrr\n", 4);
}
