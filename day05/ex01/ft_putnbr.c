/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 11:23:16 by btymoshc          #+#    #+#             */
/*   Updated: 2017/07/31 12:53:57 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int lastchar;

	if (nb < 0)
	{
		ft_putchar('-');
		lastchar = (unsigned int)(-nb) % 10;
		nb = (unsigned int)(-nb) / 10;
		ft_putnbr(nb);
		ft_putchar(lastchar + '0');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
