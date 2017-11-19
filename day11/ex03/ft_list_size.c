/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 16:41:08 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/08 16:41:10 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	t_list		*start;
	int			count;

	count = 1;
	start = begin_list;
	if (start == NULL)
		return (0);
	else
	{
		while (start->next != NULL)
		{
			start = start->next;
			count++;
		}
	}
	return (count);
}
