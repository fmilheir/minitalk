/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmilheir <fmilheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:08:56 by fmilheir          #+#    #+#             */
/*   Updated: 2021/12/16 12:17:52 by fmilheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_lstsize(t_list *lst)
{
	size_t	a;

	a = 0;
	while (lst)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}
