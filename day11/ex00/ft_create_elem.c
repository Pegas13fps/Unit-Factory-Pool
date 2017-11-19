/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 10:27:51 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/08 12:13:44 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *listelem;

	listelem = malloc(sizeof(t_list));
	listelem->data = data;
	listelem->next = NULL;
	return (listelem);
}
