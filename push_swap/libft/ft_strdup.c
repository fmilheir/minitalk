/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 10:44:11 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/22 16:53:51 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		a;
	char	*str;

	a = 0;
	while (string[a] != 0)
		a++;
	str = (char *)malloc(a * sizeof(char) + 1);
	if (!str)
		return (NULL);
	a = 0;
	while (string[a])
	{
		str[a] = string[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
