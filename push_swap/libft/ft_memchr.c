/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:31:03 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/16 15:14:57 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (*(unsigned char *)(str + a) == (unsigned char)c)
			return ((void *)(str + a));
		a++;
	}
	return (NULL);
}
