/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 21:10:06 by btymoshc          #+#    #+#             */
/*   Updated: 2017/07/29 21:26:59 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while ((result * result) < nb)
	{
		result++;
	}
	if ((nb % result) == 0)
	{
		return (result);
	}
	else
	{
		return (0);
	}
}
