/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:49:40 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/20 20:21:11 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int a)
{
	int	b;

	b = 0;
	while ((unsigned char)str[b] != '\0')
	{
		if ((unsigned char)str[b] == (unsigned char)a)
			return ((char *)(str + b));
		b++;
	}
	if (str[b] == a)
		return ((char *)(str + b));
	return (NULL);
}
