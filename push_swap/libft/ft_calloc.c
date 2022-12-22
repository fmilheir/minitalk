/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:06:39 by fmilheir          #+#    #+#             */
/*   Updated: 2022/07/30 18:21:15 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*str;

	str = (void *) malloc(size * number);
	if (!str)
		return (NULL);
	ft_memset(str, 0, number * size);
	return (str);
}
