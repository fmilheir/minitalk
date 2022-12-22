#include "../include/push_swap.h"

void	ft_global_sort(t_stacks *stacks)
{
	while (stacks->count_a > 2)
	{
		if (stacks->a->number != stacks->min
			&& stacks->a->number != stacks->max)
		{
			do_pb(stacks);
			if (stacks->b->number > stacks->med)
				do_rb(&stacks->b, true);
		}
		else
			do_ra(&stacks->a, 1);
	}
	if (stacks->a->number < stacks->a->nextInline->number)
		do_sa(stacks->a, true);
	do_pa(stacks);
	ft_start_sort(stacks);
}

void	ft_start_sort(t_stacks *stacks)
{
	t_steps	*step;

	if (!(step = (t_steps *)malloc(sizeof(t_steps))))
		exit(1);
	while (stacks->count_b != 0)
	{
		step->count_a = -1;
		step->count_b = -1;
		step->dest_a = 0;
		step->dest_b = 0;
		ft_steps_markup(stacks->a, stacks->count_a);
		ft_steps_markup(stacks->b, stacks->count_b);
		ft_minimum_insertion_steps(stacks, step);
		ft_instruction_execution(stacks, step);
	}
	if ((ft_count_to_min(stacks->a, stacks->min)) > stacks->count_a / 2)
	{
		while (stacks->a->number != stacks->min)
			do_rra(&stacks->a, true);
	}
	else
		while (stacks->a->number != stacks->min)
			do_ra(&stacks->a, true);
	free(step);
}

void	ft_steps_markup(t_test*b, int count)
{
	int		i;
	int		iter;
	t_test	*buff;

	i = -1;
	iter = count / 2;
	buff = b;
	while (++i <= iter)
	{
		buff->step = i;
		buff->rotate = 1;
		buff = buff->nextInline;
	}
	if (count % 2 == 0)
		i--;
	while (--i > 0)
	{
		buff->step = i;
		buff->rotate = -1;
		buff = buff->nextInline;
	}
}

void	ft_minimum_insertion_steps(t_stacks *stacks, t_steps *steps)
{
	int		min_action;
	t_test	*first_a;
	t_test	*first_b;

	min_action = -1;
	first_a = stacks->a;
	first_b = stacks->b;
	while (stacks->b)
	{
		min_action = ft_finding_place(stacks, stacks->b, steps, min_action);
		stacks->a = first_a;
		stacks->b = stacks->b->nextInline;
	}
	stacks->b = first_b;
}

void	ft_instruction_execution(t_stacks *stacks, t_steps *steps)
{
	while (steps->count_a > 0)
	{
		if (steps->dest_a == 1)
			do_ra(&stacks->a, true);
		else
			do_rra(&stacks->a, true);
		steps->count_a--;
	}
	while (steps->count_b > 0)
	{
		if (steps->dest_b == 1)
			do_rb(&stacks->b, true);
		else
			do_rrb(&stacks->b, true);
		steps->count_b--;
	}
	do_pa(stacks);
}
