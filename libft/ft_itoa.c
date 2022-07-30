/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:07:59 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/20 20:22:03 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*sub;
	size_t	len;

	len = get_len(n);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (0);
	sub[len] = '\0';
	if (n < 0)
		sub[0] = '-';
	else if (n == 0)
		sub[0] = '0';
	while (n != 0)
	{
		--len;
		sub[len] = absolute_value(n % 10) + '0';
		n /= 10;
	}
	return (sub);
}
