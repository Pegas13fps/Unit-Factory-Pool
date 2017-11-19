/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 22:07:17 by btymoshc          #+#    #+#             */
/*   Updated: 2017/07/29 22:10:15 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int isp;
	int i;

	i = 2;
	isp = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % 1 == 0)
		{
			isp = 1;
			break ;
		}
		i++;
	}
	if (isp)
		return (0);
	else
		return (1);
}
