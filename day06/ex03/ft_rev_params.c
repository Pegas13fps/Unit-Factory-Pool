/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btymoshc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 18:44:58 by btymoshc          #+#    #+#             */
/*   Updated: 2017/08/02 18:45:01 by btymoshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int name;
	int j;

	name = argc - 1;
	while (name > 0)
	{
		j = 0;
		while (argv[name][j])
		{
			ft_putchar(argv[name][j]);
			j++;
		}
		name--;
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return (0);
}
