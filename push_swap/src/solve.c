#include "../include/push_swap.h"

void	solver(t_stacks *stacks)
{
	if (find_len(stacks->a) <= 5)
		solverfor5(stacks);
	else
		ft_global_sort(stacks);
}

void	ft_error(void)
{
	write (0, "Error\n", 7);
	exit(1);
}

int	*ft_int_cpy(int count, int *src, int *dst)
{
	int	i;

	i = 0;
	while (i < count)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
