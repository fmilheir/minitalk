#include "../include/push_swap.h"

void	do_sa(t_test *list_a, t_bool print)
{
	int	tmp;

	if (list_a == NULL || list_a->nextInline == NULL)
		return ;
	tmp = list_a->number;
	list_a->number = list_a->nextInline->number;
	list_a->nextInline->number = tmp;
	if (print == true)
		write(1, "sa\n", 3);
}

void	do_sb(t_test *list_b, t_bool print)
{
	int	tmp;

	if (list_b == NULL || list_b->nextInline == NULL)
		return ;
	tmp = list_b->number;
	list_b->number = list_b->nextInline->number;
	list_b->nextInline->number = tmp;
	if (print == true)
		write(1, "sb\n", 3);
}

void	do_ss(t_test *list_a, t_test *list_b)
{
	do_sa(list_a, false);
	do_sb(list_b, false);
	write(1, "ss\n", 3);
}
