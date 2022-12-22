#include "../include/push_swap.h"

t_test	*my_test_fucntion(int number)
{
	t_test	*temp;

	temp = NULL;
	temp = malloc(sizeof(t_test));
	if (!temp)
		return (NULL);
	temp->nextInline = NULL;
	temp->previusInline = NULL;
	temp->step = 0;
	temp -> rotate = 0;
	temp->number = number;
	return (temp);
}

t_test	*build_liked_list(int *list, int len)
{
	int		b;
	t_test	*added;
	t_test	*first;

	first = NULL;
	b = 0;
	while (b != len)
	{
		if (first == NULL)
		{
			first = my_test_fucntion(list[b]);
			if (first != NULL)
				added = first;
		}
		else
		{
			while (added->nextInline != NULL)
				added = added->nextInline;
			added->nextInline = my_test_fucntion(list[b]);
		}
		b ++;
	}
	find_len(first);
	return (first);
}
