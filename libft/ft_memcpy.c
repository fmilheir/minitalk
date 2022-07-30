/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:09:52 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/22 16:52:56 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	a = 0;
	if (!dest && !src)
		return (NULL);
	while (a < n)
	{
		*(unsigned char *)(dest + a) = *(unsigned char *)(src + a);
		a++;
	}
	return ((char *)dest);
}
