#include "../include/push_swap.h"

t_bool	check_for_duplicates(t_test *start)
{
	t_test	*first;
	t_test	*second;

	first = start;
	while (first->nextInline != NULL)
	{
		second = first ->nextInline;
		while (second != NULL)
		{
			if (first -> number == second -> number)
				return (false);
			second = second -> nextInline;
		}
		first = first->nextInline;
	}
	return (true);
}

int	find_len(t_test *first)
{
	int	a;

	a = 0;
	while (first != NULL)
	{
		a++;
		first = first->nextInline;
	}
	return (a);
}

void	init_stacks(t_stacks *stacks, t_list_int *new)
{
	new->count_element = 0;
	stacks->count_a = 0;
	stacks->count_b = 0;
	stacks->min = 0;
	stacks->max = 0;
	stacks->med = 0;
	stacks->a = NULL;
	stacks->b = NULL;
}

void	ft_free_stack(t_stacks *stacks)
{
	int		i;
	t_test	*buff;

	i = 0;
	while (i < find_len(stacks->a))
	{
		buff = stacks->a;
		stacks->a = stacks->a->nextInline;
		free(buff);
		i++;
	}
	i = 0;
	while (i < find_len(stacks->b))
	{
		buff = stacks->b;
		stacks->b = stacks->b->nextInline;
		free(buff);
		i++;
	}
}

void	ft_duplicate_check(t_list_int *new, t_stacks *stacks)
{
	int		*dup;

	dup = (int *)malloc(sizeof(int) * (new->count_element));
	if (!dup)
		exit(1);
	dup = ft_int_cpy(new->count_element, new->a, dup);
	ft_quick_sort(dup, 0, new->count_element - 1);
	stacks->count_a = new->count_element;
	stacks->count_b = 0;
	stacks->min = dup[0];
	stacks->med = dup[new->count_element / 2];
	stacks->max = dup[new->count_element - 1];
	free(dup);
}
