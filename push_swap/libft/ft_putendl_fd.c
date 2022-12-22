/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:10:37 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/16 14:27:04 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		a;
	char	b;

	a = 0;
	b = '\n';
	if (!s)
		return ;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, &b, 1);
}
