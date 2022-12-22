#include "../include/push_swap.h"

int	ft_validation(int argc, char **argv)
{
	int	i;
	int	ret;

	ret = 0;
	i = 1;
	while (i < argc)
	{
		if (ft_only_spaces(argv[i]))
		{
			ft_number_availability(argv[i]);
			ft_valid_str(argv[i]);
			ret = 1;
		}
		i++;
	}
	return (ret);
}

void	ft_number_availability(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			return ;
		i++;
	}
	ft_error();
}

void	ft_valid_str(const char *str)
{
	size_t	i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr++;
		else if (str[i] == ' ' || str[i] == '\t')
		{
			if (sign != 0 && nbr == 0)
				ft_error();
			nbr = 0;
			sign = 0;
		}
		else if (((str[i] == '+' || str[i] == '-')
				&& (sign == 0 && nbr == 0)) && (str[i + 1] != '\0'))
			sign++;
		else
			ft_error();
		i++;
	}
}

int	ft_only_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\r' || str[i] == '\f')
			i++;
		else
			return (1);
	}
	return (0);
}

t_bool	ft_ordered_input(t_stacks *stacks, t_list_int *list)
{
	int	a;

	a = 0;
	while (stacks->a != NULL)
	{
		if (stacks->a->number != list->a[a])
			return (false);
		stacks->a = stacks->a->nextInline;
		a++;
	}
	return (true);
}
