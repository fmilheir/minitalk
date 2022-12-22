#include "../include/push_swap.h"

void	do_pa(t_stacks *stacks)
{
	t_test	*tmp;

	if (stacks->b == NULL)
		return ;
	tmp = stacks->b;
	stacks->b = stacks->b->nextInline;
	tmp->nextInline = stacks->a;
	stacks->a = tmp;
	stacks->count_a += 1;
	stacks->count_b -= 1;
	write(1, "pa\n", 3);
}

void	do_pb(t_stacks *stacks)
{
	t_test	*tmp;

	if (stacks->a == NULL)
		return ;
	tmp = stacks->a;
	stacks->a = stacks->a->nextInline;
	tmp->nextInline = stacks->b;
	stacks->b = tmp;
	stacks->count_a -= 1;
	stacks->count_b += 1;
	write(1, "pb\n", 3);
}
