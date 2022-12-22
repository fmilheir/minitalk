#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list_int	*new;
	t_stacks	*stacks;

	if (argc < 2)
		return (1);
	if (!(new = (t_list_int *)malloc(sizeof(t_list_int))))
		exit(1);
	if (!(stacks = (t_stacks *)malloc(sizeof(t_stacks))))
		exit(1);
	init_stacks(stacks, new);
	if (ft_validation(argc, argv))
	{
		ft_array_separation(argc, argv, new);
		ft_duplicate_check(new, stacks);
		if (ft_is_sorted(new))
		{
			stacks->a = build_liked_list(new->a, new->count_element);
			if (check_for_duplicates(stacks->a) == false)
				ft_error();
			solver(stacks);
			ft_free_stack(stacks);
		}
	}
	return (0);
}
