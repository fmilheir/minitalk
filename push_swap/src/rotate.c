#include "../include/push_swap.h"

void	do_ra(t_test **list_a, t_bool print)
{
	t_test	*first_list;
	t_test	*rotate_list;
	t_test	*last_list;

	if ((*list_a) == NULL || (*list_a)->nextInline == NULL)
		return ;
	rotate_list = *list_a;
	first_list = (*list_a)->nextInline;
	last_list = *list_a;
	while (last_list->nextInline != NULL)
		last_list = last_list->nextInline;
	rotate_list->nextInline = NULL;
	last_list->nextInline = rotate_list;
	*list_a = first_list;
	if (print == true)
		write(1, "ra\n", 3);
}

void	do_rb(t_test **list_b, t_bool print)
{
	t_test	*first_list;
	t_test	*rotate_list;
	t_test	*last_list;

	if ((*list_b) == NULL || (*list_b)->nextInline == NULL)
		return ;
	rotate_list = *list_b;
	first_list = (*list_b)->nextInline;
	last_list = *list_b;
	while (last_list->nextInline != NULL)
		last_list = last_list->nextInline;
	rotate_list->nextInline = NULL;
	last_list->nextInline = rotate_list;
	*list_b = first_list;
	if (print == true)
		write (1, "rb\n", 3);
}

void	do_rr(t_stacks *stacks)
{
	do_ra(&stacks->a, false);
	do_rb(&stacks->b, false);
	write(1, "rr\n", 3);
}
