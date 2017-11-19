/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 18:50:00 by btymoshc          #+#    #+#             */
/*   Updated: 2017/07/29 18:26:11 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;
	int m;

	res = 1;
	m = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (m <= nb)
	{
		res = res * (m);
		m++;
	}
	return (res);
}
