/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:31:52 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/07 14:31:55 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int count;
	int *tmp;

	count = 0;
	tmp = malloc(sizeof(int) * length);
	while (count < length)
	{
		tmp[count] = f(tab[count]);
		count++;
	}
	return (tmp);
}
