/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:12:49 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/19 16:40:14 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	while (a >= 0)
	{
		if ((unsigned char)str[a] == (unsigned char)c)
			return ((char *)(str + a));
		a --;
	}
	return (NULL);
}
