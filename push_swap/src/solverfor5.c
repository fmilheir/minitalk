#include "../include/push_swap.h"

void	ft_sort_3_element(t_stacks *stacks)
{
	int	max;

	max = ft_max(stacks->a);
	if (stacks->count_a == 1)
		return ;
	else if (stacks->count_a == 2)
	{
		if (stacks->a->number > stacks->a->nextInline->number)
			do_sa(stacks->a, true);
		return ;
	}
	else if (stacks->count_a == 3)
	{
		if (stacks->a->number == max)
			do_ra(&stacks->a, true);
		if (stacks->a->nextInline->number == max)
			do_rra(&stacks->a, true);
		if (stacks->a->number > stacks->a->nextInline->number)
			do_sa(stacks->a, true);
	}
}

void	ft_sort_5_element(t_stacks *stacks)
{
	while (stacks->count_b < 2)
	{
		if (stacks->a->number == stacks->min
			|| stacks->a->number == stacks->max)
			do_pb(stacks);
		else
			do_ra(&stacks->a, true);
	}
	ft_sort_3_element(stacks);
	do_pa(stacks);
	do_pa(stacks);
	if (stacks->a->number == stacks->max)
		do_ra(&stacks->a, true);
	else
	{
		do_sa(stacks->a, true);
		do_ra(&stacks->a, true);
	}
}

void	solverfor5(t_stacks *stacks)
{
	if (find_len(stacks->a) <= 3)
		ft_sort_3_element(stacks);
	else if (find_len(stacks->a) <= 5)
		ft_sort_5_element(stacks);
}

int	ft_max(t_test *s)
{
	int	max;

	max = s->number;
	while (s)
	{
		if (s->number > max)
			max = s->number;
		s = s->nextInline;
	}
	return (max);
}
