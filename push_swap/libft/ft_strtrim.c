/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:13:34 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/22 16:50:57 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char a, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		a;
	int		b;
	int		c;

	b = 0;
	a = 0;
	c = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[a])
		a++;
	while (s1[b] && check(s1[b], set))
		b++;
	while (a > b && check(s1[a - 1], set))
		a--;
	str = (char *)malloc(sizeof(char) * (a - b) + 1);
	if (!str)
		return (NULL);
	while (b < a)
		str[c++] = s1[b++];
	str[c] = 0;
	return (str);
}
