/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 18:26:02 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/03 18:26:04 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *mass;
	int count;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(mass = (malloc(4 * (max - min)))))
		return (0);
	count = 0;
	while (count < (max - min))
	{
		mass[count] = (min + count);
		count++;
	}
	**range = count;
	return (**range);
}
