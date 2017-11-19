/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 17:14:24 by btymoshc          #+#    #+#             */
/*   Updated: 2017/07/27 17:14:39 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (++a < 10000)
	{
		b = a / 100;
		c = a % 100;
		if (b < c)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			ft_putchar(' ');
			ft_putchar(48 + c / 10);
			ft_putchar(48 + c % 10);
		}
	}
}
