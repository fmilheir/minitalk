#include "../include/push_swap.h"

void	ft_array_separation(int argc, char **argv, t_list_int *new)
{
	int		a;
	int		i;
	int		*buff;
	char	**temp;
	int		count;

	i = 1;
	while (i < argc)
	{
		a = -1;
		count = ft_countword(argv[i]);
		temp = ft_split(argv[i], count);
		buff = (int *)malloc(sizeof(int) * (count));
		if (!buff)
			exit(1);
		while (count > ++a)
		{
			buff[a] = ft_atoi(temp[a]);
			free(temp[a]);
		}
		free(temp);
		ft_stacking(new, buff, count);
		i++;
	}
}

void	ft_stacking(t_list_int *new, int *buff, int count)
{
	int	i;

	i = -1;
	while (count > ++i)
		new->a[new->count_element + i] = buff[i];
	new->count_element += count;
	free(buff);
}

int	ft_countword(char const *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != ' ' && *s != '\t')
		{
			count++;
			while ((*s != ' ' && *s != '\t') && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}
