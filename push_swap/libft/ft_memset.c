/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:10:18 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/16 21:35:55 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		*(unsigned char *)(str + a) = (unsigned char)c;
		a++;
	}
	return (str);
}
