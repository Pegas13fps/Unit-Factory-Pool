/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 16:41:20 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/03 16:41:22 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *mass;
	int count;

	if (min >= max)
		return (NULL);
	if (!(mass = (malloc(4 * (max - min)))))
		return (NULL);
	count = 0;
	while (count < (max - min))
	{
		mass[count] = (min + count);
		count++;
	}
	return (mass);
}
