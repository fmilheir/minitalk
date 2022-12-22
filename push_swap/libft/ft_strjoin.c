/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:11:43 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/22 17:35:19 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	a = a + b;
	b = 0;
	str = (char *) malloc(sizeof(char) * (a + 1));
	if (!str)
		return (NULL);
	while (s1[b])
	{
		str[b] = s1[b];
		b++;
	}
	a = 0;
	while (s2[a])
		str[b++] = s2[a++];
	str[b] = 0;
	return (str);
}
