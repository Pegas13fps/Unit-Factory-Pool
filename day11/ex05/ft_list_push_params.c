/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:27:47 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/08 19:27:49 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*param;
	t_list	*str;
	int		count;

	count = ac - 1;
	str = ft_create_elem(av[count]);
	param = str;
	while (ac > 0)
	{
		str->next = ft_create_elem(av[count]);
		str->data = av[count];
		count--;
		ac--;
		str = str->next;
	}
	str->next = 0;
	return (param);
}
