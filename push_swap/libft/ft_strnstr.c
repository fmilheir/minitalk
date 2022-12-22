/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:44:04 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/19 17:24:13 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[a] != '\0' && a < len)
	{
		b = 0;
		if (big[a] == little[b])
		{
			while (big[a + b] == little[b] && a + b < len)
			{
				b++;
				if (!little[b])
					return ((char *)(big + a));
			}
		}
		a++;
	}
	return (NULL);
}
