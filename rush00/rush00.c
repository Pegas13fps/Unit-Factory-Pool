/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleichen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 14:00:09 by oleichen          #+#    #+#             */
/*   Updated: 2017/07/30 19:36:32 by oleichen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_ang(int i, int j, int x, int y)
{
	if (i == x && j == 1)
		return (1);
	if (i == 1 && j == 1)
		return (1);
	if (i == x && j == y)
		return (1);
	if (i == 1 && j == y)
		return (1);
	return (0);
}

void	rush00(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j++ < y)
	{
		i = 0;
		while (i++ < x)
		{
			if (ft_ang(i, j, x, y))
				ft_putchar('o');
			else if (j == 1 || j == y)
				ft_putchar('-');
			else if (i == 1 || i == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
