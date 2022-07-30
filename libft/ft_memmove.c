/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:44:02 by fmilheir          #+#    #+#             */
/*   Updated: 2022/07/30 18:16:11 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	a;

	a = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	if (dest > src)
	{
		a = (int)n - 1;
		while (a >= 0)
		{
			*(unsigned char *)(dest + a) = *(unsigned char *)(src + a);
			a--;
		}
	}
	else
	{
		while (a < (int)n)
		{
			*(unsigned char *)(dest + a) = *(unsigned char *)(src + a);
			a++;
		}
	}
	return ((char *)dest);
}
