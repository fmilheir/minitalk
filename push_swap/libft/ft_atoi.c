/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:26:51 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/20 21:00:15 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int					a;
	int					b;
	unsigned long int	numb;

	a = 1;
	b = 0;
	numb = 0;
	while (nptr[b] == '\t' || nptr[b] == '\n' || nptr[b] == '\v'
		|| nptr[b] == '\f' || nptr[b] == '\r' || nptr[b] == ' ')
		b++;
	if (nptr[b] == '-' || nptr[b] == '+')
	{
		if (nptr[b] == '-')
			a *= -1;
		b++;
	}
	while (nptr[b] >= '0' && nptr[b] <= '9')
	{
		numb = (numb * 10) + (nptr[b] - '0');
		b++;
	}
	return (numb * a);
}
