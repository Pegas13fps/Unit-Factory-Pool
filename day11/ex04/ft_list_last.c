/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:04:38 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/08 19:04:40 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *lastelem;

	lastelem = begin_list;
	if (begin_list == 0)
		return (0);
	else
	{
		while (lastelem->next)
			lastelem = lastelem->next;
		return (lastelem);
	}
}
