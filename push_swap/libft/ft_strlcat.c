/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:41:59 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/22 16:49:17 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	c;
	size_t	d;

	b = 0;
	c = ft_strlen(src);
	d = ft_strlen(dst);
	a = d;
	if (d < dstsize - 1 && dstsize > 0)
	{
		while (src[b] != '\0' && b + d < dstsize - 1)
		{
			dst[a] = src[b];
			b++;
			a++;
		}
		dst[a] = '\0';
	}
	if (d >= dstsize)
		d = dstsize;
	return (c + d);
}
